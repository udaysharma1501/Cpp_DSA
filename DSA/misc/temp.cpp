#include <iostream>
using namespace std;
class node
{
    friend node *create_new_node(int);

public:
    node* data;
    node *next;
    node(node* d)
    {
        data = d;
        next = NULL;
    }
};
node *create_new_node(int d)
{
    node *new_node = new node(d);
    new_node->next = NULL;
}
void print_LL(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout<<endl;
}
int main()
{
    node *head1 = NULL;
    node *n1a = create_new_node(5);
    head1 = n1a;
    print_LL(head1);


    node* head = 
    /* 
        n1a      ->      n1b      ->      n1c
        head1
        n2a      ->      n2b      ->      n2c
        head2

        head1 -> head2
        head    
    */

}