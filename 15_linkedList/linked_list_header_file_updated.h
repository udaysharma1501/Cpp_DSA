#include <iostream> //to avail NULL pointer
using namespace std;
class list; // forward declaration
class node
{
    friend class list; // so that class list can access 'next' directly
    int data;          // part of node which holds data

public:
    node *next; // part of node which holds next node's address
    node(int d)
    {
        data = d;
        next = NULL;
    }

    // defining to get access to data (as it's private to class list)
    int getData()
    {
        return data;
    }
    //--------------------------delete------starts here----------
    ~node()
    {
        if(next!=NULL)
        {
            delete next;
        }
    }
};
class list
{
    node *head;
    node *tail;

public:
    list() : head(NULL), tail(NULL) {}

    // defining to provide access of head to main
    node *begin()
    {
        return head;
    }

    // defining methods
    void push_front(int data)
    {
        if (head == NULL) // condition for empty list
        {
            node *new_node = new node(data); // filling in the data part of the node
            // new is being used as we want the new node 'new_node' to persist in the memory even after function call is over
            head = tail = new_node; // as there's only one node, both the head and tail point to it.
            return;
        }
        else // non empty list
        {
            node *new_node = new node(data);
            // (*n).next = head; //alernate syntax
            new_node->next = head; // make the new node point to the current head of the list, hence establishing a connection between newly created node and existing node
            head = new_node;       // Updates the 'head' pointer to point to the newly created node 'new_node'. This makes the new node the new head of the list, and it is now connected to the rest of the nodes that were previously in the list
        }
    }
    //--------------------------push_back------starts here----------
    void push_back(int data)
    {
        if (head == NULL)
        {
            node *new_node = new node(data);
            head = tail = new_node;
        }
        else
        {
            // assuming that the list already exists, we change the pointer of last element (old tail) to a new node (which becomes new tail) which has a null pointer as it's next pointer
            node *new_node = new node(data);
            tail->next = new_node;
            tail = new_node;
            // new_node->next = NULL; //DOUBT: isn't it necessary to include this as well?
        }
    }
    //--------------------------insert------starts here----------
    void insert(int data_to_be_inserted, int position)
    {
        if (position == 0)
        {
            push_front(data_to_be_inserted); // pushing data directly to head
            return;
        }
        /*
        example:
        current: 0 -> 1 -> 3 -> 4
        required: 0 -> 1-> 2 -> 3 -> 4              insertion of 2 at position 2

        1. store head in temp variable (to avoid unecessary updation)
        2. bring head pointer to 1      => by making it jump 2-1 times       ==> jumps = position-1
        3. establish right link:        inserted_node->next = temp->next    (because prior to insertion, temp (head) used to point to the next node, where the inserted node must point now)
        4. establish left link:         temp->next = inserted_node
        */
        node *temp = head;
        for (int jump = 1; jump <= (position - 1); jump++) // BEWARE OF '<='
        {
            temp = temp->next; // to iterate and make head traverse uptil the (position - 1) position
        }
        node *inserted_node = new node(data_to_be_inserted);
        // right link
        inserted_node->next = temp->next;
        // left link
        temp->next = inserted_node;
    }
    //--------------------------search------starts here----------
    int search(int key, node *head)
    // void search(int key)
    {
        node *temp = head;
        int counter = 0; // to return exact position of key
        while (head != NULL)
        {
            if (temp->data == key)
            {
                return counter + 1;
            }
            counter++;
            temp = temp->next;
        }
        return -1;
    }
    bool check(int key, node *head) // to check if element is present or not
    {
        node *temp = head;
        while (temp != NULL)
        {
            if (temp->getData() == key)
            {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
    // int recursive_search(int key)
    // {
    //     /*
    //     1. check for key at head
    //         1.1. if its present we return (index+1)
    //         1.2. if its not present
    //             1.2.1. updated head to next node
    //             1.2.2. make the same call on the remaining nodes
    //     */

    // }
    //--------------------------delete------starts here----------
};