#include<iostream>
#include "linked_list_header_file_updated.h"
using namespace std;
void print_linked_list(node* head)
{
    while(head!=NULL)
    {
        cout<<head->getData()<<" ";
        head = head->next;
    }
    cout<<endl;
}
int main()
{
    list l;
    
    for(int i=0; i<10; i++)
    {
        l.push_back(i+1);
    }

    node* head = l.begin();
    print_linked_list(head); //1 2 3 4 5 6 7 8 9 10    
    cout<<l.search(3, head)<<endl;
    cout<<l.check(6, head)<<endl;
}