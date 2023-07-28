//https://www.youtube.com/watch?v=VOpjAHCee7c
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

void printList(node *head1) // start of list is passed to commence the printing
{
    while (head1 != NULL) // comments written for first iteration and later for second iteration
    {
        cout << (head1->data) << " "; // data stored in first node is printed
        head1 = head1->next;          // head1 points to data of first node, then second and then third
    }
    cout<<endl;
}

int main()
{

    node n1, n2, n3;
    node *head; // head is a pointer variable which is made to point to the address being stored in the concerned node, it serves as a counter being used to point to the node we desire.

    n1.data = 45; // data being stored in data part of each node
    n2.data = 8;
    n3.data = 32;
    // 45 -> 8 -> 32
    // n1 -> n2 -> n3

    // linking them
    head = &n1;     // head initially points to the address of first node's data
    n1.next = &n2;  // first node's next pointer points to the address of second node's data
    n2.next = &n3;  // second node's next pointer points to the address of third node's data
    n3.next = NULL; // as the third node is the end of the list, it's next pointer points to NULL; hence marking the end of the list
                    // head pointer encountering NULL can be used as a termination condition to escape

    printList(head);

    //inserting between n1 and n2
    node n_between1and2;
    n_between1and2.data = 13;

    n_between1and2.next = &n2;
    n1.next = &n_between1and2;

    //45 -> 13 -> 8 -> 32
    printList(head);
}