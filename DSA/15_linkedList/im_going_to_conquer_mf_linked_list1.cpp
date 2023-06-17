#include <iostream>
using namespace std;

class node
{
    int data;

public:
    node *next;
    node(int d)
    {
        data = d;
    }
    int getData()
    {
        return data;
    }
};
class list
{
    node *head;

public:
    list() : head(NULL) {}
};

node *creatingNewNode(node *head1, int data3)
{
    if (head1 == NULL)
    {
        node *new_node = new node(data3);
        head1 = new_node;
        return new_node;
    }
    else // else if(head1!=NULL)
    {
        node *new_node = new node(data3);
        // new_node -> already existing one (address as memory stored in head)
        new_node->next = head1;
        head1 = new_node;
        return new_node;
    }
}
void print_list(node *head1)
{
    while (head1 != NULL)
    {
        cout << head1->getData() << " ";
        head1 = head1->next;
    }
    cout << endl;
}

int main()
{
    int data1, data2, data3;
    cin >> data1 >> data2 >> data3;

    node *head;

    // creating a new node
    node *new_node1 = new node(data1);
    head = new_node1;
    // 1
    new_node1->next = NULL;

    // adding a node to this
    node *new_node2 = new node(data2);
    // 2 -> 1
    new_node2->next = new_node1;
    head = new_node2;
    print_list(head);

    node *new_node3;
    new_node3 = creatingNewNode(head, data3);
    head = new_node3;
    print_list(head);
    //-----------------------------------------------------------------------------------------------------
    //-----------------------------------------------------------------------------------------------------
    // adding new data to end of linked list
    /*
        1. traverse the link list and reach the end
        2. call createNewNode function and create a node
        3. assign null to the newly created node
    */
    
}