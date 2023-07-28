#include <iostream>
#include "linked_list_header_file_updated.h"
using namespace std;
int main()
{
    list l1;
    l1.push_front(2);
    l1.push_front(0);
    l1.push_back(3);
    // 0 -> 2 -> 3

    // for printing to main we need access to head and for that we write the function begin inside list class (inside header file)
    node *head = l1.begin();

    while (head != NULL)
    {
        cout << head->getData() << " ";
        head = head->next; // head is shifted to next so that it can then point to the next node's data part
                           // as next is private: options: 1) we define this logic inside class, 2) define getter, 3) make next as public
                           // we choose option 3
    }
}