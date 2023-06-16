#include<iostream>
#include"linked_list_header_file_updated.h"
using namespace std;
int main()
{
    list l2;
    l2.push_front(1); //1
    l2.push_front(0); //0 1
    l2.push_back(3); // 0 1 3
    l2.push_back(4); // 0 1 3 4
    
    l2.insert(2, 2); //0 1 2 3 4

    l2.insert(-10, 0); //-10 0 1 2 3 4
    node* head = l2.begin();

    while(head!=NULL)
    {
        cout<<head->getData()<<" ";
        head = head->next;
    }
    return 0;
}