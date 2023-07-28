#include <iostream>
using namespace std;

class node
{
    int data;

public:
    node *next;
    node(int d) : data(d), next(NULL) {}
    int getdata() { return data; }
};
class list
{
public:
    node *head;
    list() : head(NULL) {}
    /*
    1. creating a node (inside main and insiade class)
    2. printing a node (inside class and outside class)
    3. push front
    4. push back
    5. insert
    6. search
    7. deleting node
    */
    node *create_new_node(node *&head, int data)
    {
        node *new_node = new node(data);
        // right link
        new_node->next = head;
        head = new_node;
        return new_node;
    }
    // insert function
    void insert(int data, int pos)
    {
        /*
        case1: insertion at head
        case2: insertion at tail or middle
        case3: invalid insertion
        */
        node* n = new node(data);
        if(pos==1)
        {
            n->next = head; //right link
            head = n;
            return;
        }
        else if(pos>)
    }
    void print_list(node *head)
    {
        while (head != NULL)
        {
            cout << head->getdata() << " ";
            head = head->next;
        }
        cout << endl;
    }
};
int main()
{
    list l1;
    node *n1 = l1.create_new_node(l1.head, 45);
    node *n2 = l1.create_new_node(l1.head, 67);
    node *n3 = l1.create_new_node(l1.head, 434);
    node *n4 = l1.create_new_node(l1.head, 89);
    // n4 -> n3 -> n2 -> n1
    l1.print_list(l1.head);

    // push front --> insert data at head
    // although its implementation is already done in create node function
    int data1;
    cout << "input data to be inserted at head: ";
    cin >> data1;
    node *n5 = new node(data1);
    // right link
    n5->next = l1.head;
    l1.head = n5;
    // n5 -> n4 -> n3 -> n2 -> n1
    l1.print_list(l1.head);

    // push back --> insert data at tail
    int data2;
    cout << "input data to be inserted at tail: ";
    cin >> data2;
    node *n6 = new node(data2);
    n6->next = NULL; // Set the next pointer of the new node to NULL
    node *current = l1.head;
    while (current->next != NULL)
    {
        current = current->next; // Traverse the list until the last node
    }
    current->next = n6; // Update the next pointer of the last node to point to the new node
    l1.print_list(l1.head);

    // n5 -> n4 -> n3 -> n2 -> n1 -> n6
    l1.insert(100, 3);
    l1.print_list(l1.head);
}