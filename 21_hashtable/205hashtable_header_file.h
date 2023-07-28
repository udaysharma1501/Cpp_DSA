// key ---> hash_function ---> index
/*
things we need:
    1. class node: to store a linked list head as an element of the table
        1.1. string key: input
        1.2. T value: input
        1.3. node* next: to point to the next node
    2. class hashtable:
        2.1. node** table: is a pointer to an array of pointer variables
*/
// information flow:  main        --->         hastable<T>         --->        node<T>
#include <iostream>
#include <cstring>
using namespace std;
template <typename T>
class node
{
public:
    // ideally these should be accessed by using friend class or getters/setter functions
    string key;
    T value;
    node *next;

    node(string k, T value)
    {
        this->key = key;
        this->value = value;
        next = NULL;
    }
    ~node() // calling destructor recursively to destroy every node in the entire list
    {
        if (next != NULL)
        {
            delete next;
        }
    }
};
template <typename T>
class hashtable
{
    node<T> **table;
    int curr_size;  // number of inserted entries
    int table_size; // total size of table

    //--------------------------------------hash function starts--------------------------------------
    // converts key to index
    int hashFn(string key)
    {
        /*
        modulus is used to control overflow of large value trying to befitted into the hashtable
            ex:
                key = abc
                ch goes from 'a -> b -> c'
                for loop:
                    0       + (a*1)                 ---> a
                    a       + (b*29)                ---> a + 29*b
                    a + 29b + (a + 29b + c*29*29)   ---> a + 29*b + 29*29*c
        */
        int idx = 0;
        int power = 1;
        for (auto ch : key)
        {
            // modded to control overflow
            idx = (idx + ch * power) % table_size;
            // modded to control overflow
            power = (power * 29) % table_size; // to apply weight upon each character coming through in each iteration
        }
        return idx;
    }
    //--------------------------------------hash function ends--------------------------------------
    //--------------------------------------rehash function starts--------------------------------------
    void rehash()
    {
        // save pointer to old table and we will do insertions in new table
        node<T> **old_table = table; // 'table' being a data member of the class

        int old_table_size = table_size; // retain

        // table size is updated to new table size
        table_size = 2 * table_size + 1; // ideally should be made prime, but adding 1 makes it odd

        table = new node<T> *[table_size];

        // intialising new table with null values
        for (int i = 0; i < table_size; i++)
        {
            table[i] = NULL;
        }

        // copying elements from old table to new table while also destroying the old table
        for (int i = 0; i < old_table_size; i++) // iterating over all linked lists
        {
            node<T> *temp = old_table[i]; // temp variable points to head of i'th linked list in the old table

            while (temp != NULL)
            {
                string key = temp->key;
                T value = temp->value;

                insert(key, value); // how does insert function know which table to refer to?
                                    //--> we've updated the table  by making the rehash function a member function hence  which changes the class data member 'table' directly
                temp = temp->next;
            }

            // destroy i'th linked list
            if (old_table[i] != NULL)
            {
                delete old_table[i]; // does this work? delete [i]old_table
                // problem1: deleting this way doesnt destroy the adjecent nodes present in the linked list, while only deleting the first head
                // solution1: see destructor inside node class

                // problem2: old table must also be deleted after copying
                // solution2: see delete used after loop ends
            }
        }
        delete[] old_table;
    }

    //--------------------------------------rehash function ends--------------------------------------

public:
    hashtable(int default_size = 7) // 7 taken because of it being a prime number
    {
        curr_size = 0;
        table_size = default_size;

        // allocated dynamically so that the table can grow
        // each table element is a pointer of type node* (having template T)
        table = new node<T> *[table_size];

        // to initialise each bucket (containing head of LL) to point to NULL
        for (int i = 0; i < table_size; i++)
        {
            table[i] = NULL;
        }
    }

    //--------------------------------------insert function starts--------------------------------------
    void insert(string key, T val) // O(1) operation
    {
        int idx = hashFn(key); // idx in the range (0 to table_size-1) is obtained

        // intialising new node having key and val as data and it's next points to the table's index produced by using key as the data for hashing
        node<T> *new_node = new node<T>(key, val);

        // insertion at head
        new_node->next = table[idx]; // new_node's next now points to null
        table[idx] = new_node;       // table's index (produced by key) points to the new_node's data

        curr_size++; // upon creation of each new node, current size must increase by one

        /*
        load factor = curr_size/table_size;
        define  load factor threshold
        if      threshold == 1
        then    double table_size
        and     copy old elements to new table ---> new hashes would be assinged to old elements (as the hashing depends on table size)
        doing this will:
            - reduce collisions
        */

        float load_factor = curr_size / float(table_size);
        if (load_factor > 0.7)
        {
            rehash();
        }
    }
    //--------------------------------------insert function ends--------------------------------------
    //--------------------------------------print function starts--------------------------------------
    void print()
    {
        for(int i=0; i<table_size; i++)
        {
            cout<<"bucket "<<i<<" ---> ";
            
            node<T>* temp = table[i];
            while(temp!=NULL)
            {
                cout<<temp->key<<" ---> ";
                temp = temp->next;
            }
            cout<<endl;
        }
    }
    //--------------------------------------print function ends--------------------------------------
};