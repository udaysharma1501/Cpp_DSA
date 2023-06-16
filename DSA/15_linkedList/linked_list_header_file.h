#include <iostream> //for 'NULL'
class node
{
    friend class list; // so that class list can access next directly
    int data;          // part of node which holds data
    node* next;        // part of node which holds next node's address

public:
    node(int d)
    {
        data = d;
        next = NULL;
    }
};

class list
{
    node* head;
    node* tail;

public:
    list() : head(NULL), tail(NULL) {}

    // defining methods
    void push_front(int data)
    {
        if (head == NULL) // condition for empty list
        {
            node *new_node = new node(data); // filling in the data part of the node
            // new is being used as we want the new node 'n' to persist in the memory even after function call is over
            head = tail = new_node; // as there's only one node, both the head and tail point to it.
            return;
        }
        else // non empty list
        {
            node *new_node = new node(data);
            // (*n).next = head; //alernate syntax
            new_node->next = head; // new node's next pointer is made to the current head, hence establishing a connection between newly created node and existing node
            head = new_node;       // Updates the 'head' pointer to point to the newly created node 'new_node'. This makes the new node the new head of the list, and it is now connected to the rest of the nodes that were previously in the list
        }
    }
};