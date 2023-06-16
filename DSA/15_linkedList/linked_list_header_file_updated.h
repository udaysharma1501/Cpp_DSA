#include <iostream>
class list; // forward declaration
class node
{
    friend class list; // so that class list can access next directly
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
        // otherwise we break the chain between the temp_th node and (temp+1)th node and add a new node in between
        
        //establishing connection between new node and (n+1)th node
        node* temp = head;

        for(int jump =1; jump<=(position-1); jump++)
        {
            temp = temp->next;
        }

        node* node_to_be_inserted = new node(data_to_be_inserted);
        node_to_be_inserted->next = temp->next;
        temp->next = node_to_be_inserted;
    }
};