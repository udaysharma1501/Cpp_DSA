#include <iostream>
#include <unordered_map>
using namespace std;
/*
    node class
        - one character variable
        - one hashmap containing all the addresses of the node's children
            - 26 sized map for all letters of the alphabet
        - boolen property - to check whether the node is a terminal node or not
*/
class node
{
    friend class trie;
    char data;                       // letter in the node
    unordered_map<char, node *> map; // hashmap containing the children's addresses
    bool isTerminal;                 // to check whether the node is termianl or not

public:
    node(char d)
    {
        data = d;
        isTerminal = false;
    }
};

class trie // operations - consturction, insertion, searching, deletion
{
    node *root; // pointer to root node

public:
    trie()
    {
        root = new node('\0'); // every new trie will be initialised with NULL root
    }
    // ----------------------------------------------insert----------------------------------------------
    /*
    - inserting hello -
        1. check map in root node for the character 'h'
            - yes?
                2.1. move root to 'h' ---> check 'e' in map of 'h'
                    - yes?
                        2.1.1. continue similar to (2.1.)
                    - no?
                        2.1.2.  continue similar to (2.2.)
            - no?
                2.2. create new node (initialising it with 'h') and store it's address in NULL's map
    - inserting he when hello already exists
        1. traverse uptil 'e' in hello
        2. mark it as a terminal node
    */
    void insert(string word)
    {
        node *temp = root; // stored in temp to not loose original properties

        for (char ch : word) // iterates over each letter of 'word' as an isolated entity
        {
            // 'temp->map' used to access the hashmap
            // 'map.count()' used to access each letter in hashmap, where the letter to be checked is passed as an argm
            if (((temp->map).count(ch)) == 0) // true if there's no letter present
            {
                node *new_node = new node(ch); // letter doesnt exist as a child, hence we create a new node for that character
                (temp->map)[ch] = new_node;    // storing the address of the new_node in the map of parent node
            }
            temp = temp->map[ch]; // next letter already exists hence we move to next node
        }
        temp->isTerminal = true; // exiting the for loop, temp points to the final letter of the word, hence we update it as a terminal node
    }

    // ----------------------------------------------search----------------------------------------------
    /* 
    state of trie: (--> are terminal nodes)
                                            ______________________________________________
                                            |                                    \0      |  root
                                            |                                h           |
                                            |                       -->  e  <--          |  terminal
                                            |                        l                   |
                                            |                    l                       |
                                            |           -->  o   <--                     |  terminal
                                            |____________________________________________|
    example search:
                    he      --> 1
                    hell    --> 0
                    apple   --> 0
    */    
    bool search(string word)
    {
        node* temp = root;
        for(char ch : word)
        {
            if((temp->map).count(ch) == 0)
            {
                return false; // letter isnt present in map
            }
            temp = (temp->map)[ch];
        }
        return temp->isTerminal; //returns true if, terminal node == node containing the word's final letter (which temp is currently pointing to)
    }
};