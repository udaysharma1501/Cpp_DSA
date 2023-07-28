#include <iostream>
using namespace std;
int main()
{
    /*
        static memory
            - found in call stack
            - static memory is allocated by the compiler
            - memory destroyed at end of scope

        dynamic memory
            - found in heap
            - needs to be created and destroyed by the programmer
    */
    //---------------------------------------------------
    int *x = new int; // creates space 'int' to store int inside heap
    *x = 10;     // stores 10 in the heap memory space, while the memory of x (inside stack) points to address of heap memory storing our value
    delete x;
    //---------------------------------------------------
    int *k = new int[100];
    k[0] = 998; //means that k[0] ==> *(k+0) ==> *k now stores the address of the memory storing 998 (the memory which is located in heap)
    delete []k;
}

void function()
{
    int n;
    int *arr = new int[n];
    //imp points:
    /*
        int *arr ===> static pointer variable ===> part of call stack ===> will get destroyed when function ends
        new int  ===> goes in heap memory

        *arr (from stack) points to memory (from heap)
    */
    /*
    end of function:
                    *arr gets destroyed
                    dynamically allocated memory must be destryoed manually
    */
    /*
    arr[2] ====> *(arr + 2)
    */
    /*
    example:
            ques: write 5 in the heap memory at position 'arr + 2'

            ans: arr [2] = 5; //further syntax remains the same
   */

    /*
    deleting the dynamically allocated memory:
    syntax:
    */
    delete[] arr;
}
