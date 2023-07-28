#include <iostream>
using namespace std;

class node
{
    int data;

public:
    node *next;
    node(int data)
    {
        this->data = data;
    }
    int getData()
    {
        return data;
    }
};

node *createNewNode(int data)
{
    node *new_node = new node(data);
    new_node->next = NULL; // for initialisations sake
    return new_node;
}
void printl_list(node *head1)
{
    while (head1 != NULL)
    {
        cout << head1->getData() << " ";
        head1 = head1->next; // next node's address is assigned to head to update it
    }
    cout << endl;
}
int main()
{
    node *head;
    node *tmp;

    // tmp = createNewNode(32); // inputting value in new node and initialising ptr to NULL
    // head = tmp;              // making head point to the new node

    // tmp = createNewNode(8); // inputting value in new node and initialising ptr to NULL
    // tmp->next = head;       // making the new node point to the previously created node
    // head = tmp;             // making head point to the new node

    // tmp = createNewNode(34); // inputting value in new node and initialising ptr to NULL
    // tmp->next = head;        // making new node point to previous node
    // head = tmp;              // making head point to new node

    /*
    1. create new node
    2. change it from 'pointing to null' to 'point to the previously created node'
    3. change the head from 'pointing to the previous node' to 'pointing to new node'
    */
    //    node* prev_node = new node(3);
    //    prev_node->next=NULL;
    //    head->next = pre_prev_node;

    //    node* new_node = new node(4);
    //    new_node->next = prev_node;
    //    head->next = new_node;

    for (int i = 0; i < 25; i++)
    {
        node *new_node = new node(i);
        new_node->next = 
    }
    printl_list(head);
}