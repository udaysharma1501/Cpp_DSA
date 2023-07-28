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

// void createNewNode;

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
    node *new_node1 = new node(data1);
    head = new_node1;

    // jab bhi new node banta hai woh list ke head par insert hota hai
    node *new_node2 = new node(data2);
    // new_node2 -> new_node1
    // making right link
    new_node2->next = new_node1; // as new_node1 is a pointer, it already stores the address of the first node, it doesnt need the & operator
    // making left link
    head = new_node2;
    new_node1->next = NULL;

    print_list(head);
//-----------------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------------
    node *new_node3 = new node(data3); // storing data in 3
    // 3 -> 2 -> 1

    // making right link
    // giving the previously stored node's address (stored in head) to the new node so that it can form a link with the new node
    new_node3->next = new_node2;
    //  3's next now stores 2's address

    // making left link
    head = new_node3;
    print_list(head);
}