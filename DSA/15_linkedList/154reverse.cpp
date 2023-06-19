#include <iostream>
#include "linked_list_header_file_updated.h"
using namespace std;
void print_linked_list(node *head)
{
    while (head != NULL)
    {
        cout << head->getData() << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{
    list l1;
    l1.push_front(4);
    l1.push_front(3);
    l1.push_front(2);
    l1.push_front(1);
    node *head = l1.begin();
    print_linked_list(head);
    // 1 -> 2 -> 3-> 4
    /*
    reversed: 1 <- 2 <- 3 <- 4
              each node must point to the one preceeding it

    curr -> to store the address of the current node
    temp -> to store the address of the node in front of current node
    temp = curr->next                   so that we dont loose the address of the node in front of current

    now we can safetly update curr's address to make it point to the prev node (prev must be initialised with NULL as the head now becoems the tail)
    curr->next = prev

    as we need to iterate over all nodes:
    prev = curr         being shifted one node to the left  (IMP: THIS STEP MUST ALWAYS COME BEFORE THE NEXT ONE)
    curr = temp         being shifted one node to the left

    after the last iteration ends:
                                    temp = NULL
                                    curr = NULL
                                    prev = new head of the list
    */
    node *curr = head;
    node *prev = NULL;
    node *temp;

    while (temp != NULL)
    {
        temp = curr->next; //save the next node
        curr->next = prev; //make the current node point to previous

        prev = curr; //updating curr and prev to make them go one node to the right
        curr = temp;
    }
    print_linked_list(prev);
}