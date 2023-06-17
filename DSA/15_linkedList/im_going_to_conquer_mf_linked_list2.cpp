#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node* next;
    node(int d):data(d){}
};
class list
{
    node* head;
public:
    list():head(NULL){}
};
void print_list(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main()
{
    node* head;
    int d1, d2, d3;
    cin>>d1>>d2>>d3;
    node* n1 = new node(d1);
    // head = n1;
    head->next = n1;
    n1->next = NULL;
    // n1 = NULL;
    print_list(head);
}