#include <iostream>
using namespace std;
int main()
{
    // basics ----------------------------------------------------------------------
    // int a=1;
    // int* a_ptr;         // declaration
    // a_ptr = &a;         // initialisation
    // cout<<*a_ptr<<endl; // dereference

    /*
                                                heap            stack           code section

        - code section has all our classes, functions and the main driver function
            - which can only access data from code section itself and from the stack
            - pointer in stack points to memory located in heap (to access data inside the heap indirectly)
    */

    // accessing heap memory ----------------------------------------------------------------------
    /*
    *** memory is allocated dynamically - size of the memory required in heap is deicided at runtime and not at compile time
    *** usually array is allocated
    */

    // int A[] = {1, 2, 3, 4, 5}; // A is created inside stack and made to store these elements

    // int *P;                     // P (pointer variable) created inside stack
    // P = new int[5];             // memory space for 5 integers is allocated inside heap and the address of the first index (located in heap) is stored inside P (located in stack)

    // for (int i = 0; i < 5; i++) // heap allocated memory made to store 5 integers
    // {
    //     P[i] = i + 1;
    // }
    // for (int i = 0; i < 5; i++) // accessing
    // {
    //     cout << P[i] << " ";
    // }

    // // demonstration
    // cout << endl;
    // cout << P       << " " << *P       << endl;
    // cout << (P + 1) << " " << *(P + 1) << endl;
    // cout << (P + 4) << " " << *(P + 4) << endl;

    // // *** heap memory, unlike stack memory has a scope in the program of it being alloacted and deallocated
    // // *** even after ending of function, if the program is still running - heap memory must be deleted or else it will persist and cause a memory leak
    // // *** upon ending of the function - the pointer pointing to the memory in heap would be destroyed (as it was created in the stack in the first place) hence the pre-allocated memory would still persist in heap with having no way to be accessed (hence lost)
    // delete []P;
    // P = nullptr; // use this instead of 'NULL'

    // why use heap for dynamic memory allocation? ----------------------------------------------------------------------
    // int size1;
    // cin>>size1;
    // int arr1[size1]; // fixed sized array inside stack
    // cout<<sizeof arr1<<endl; // 4 * size1

    // int size2;
    // cin>>size2;
    // int* arr2 = new int[size2]; // array in heap
    // cout<<sizeof arr2<<endl; // 4 ---> as it always stores an address to heap
    // cout<<arr2<<endl; // ---> address of first block of arr2 in heap

    // // which later can be resized
    // int size3;
    // cin>>size3;
    // arr2 = new int[size3];
    // cout<<sizeof arr2<<endl; // 4 ---> as it's the size of a variable which simply stores the address of another memory location in heap
    // cout<<arr2<<endl; // ---> shows newly allocated address
    // arithmeric ---------------------------------------------------------------------------------------------
    // int arr[] = {2, 5, 9, 54, 45, 23};
    // int *arr_ptr = arr;
    // /*
    // addition -
    //     1. with constants
    // subtraction -
    //     2. with constants
    //     3. with other pointers
    // */
    // cout << arr_ptr << " " << *arr_ptr << endl;
    // cout << (arr_ptr + 1) << " " << *(arr_ptr + 1) << endl; // 1. ---> can also be written as (arr_ptr++)

    // int *arr_ptr1 = &arr[4]; // points to 45

    // cout << (arr_ptr1 - 1) << " " << *(arr_ptr1 - 1) << endl; // 2. ---> shifts from 45 to 54

    // cout << (arr_ptr1 - arr_ptr) << endl; // 3. ---> tells about number of elements between these pointers

    // //*** imp: arr[i] === arr_ptr[i]

    // problems using problems --------------------------------------------------------------------------------------
    // /*
    //     1. uninitialised pointer - any declared ptr must point to a specified location
    //     2. memory leak
    //     3. dangling pointer
    // */
    // // // this works too:
    // // int a=2;
    // // cout<<&a<<endl;
    // // int* p = (int*)0x61ff08;
    // // cout<<*p<<endl;
    // reference --------------------------------------------------------------------------------------------------
    int x = 10;
    int &y = x; // reference variable ---> y is another name for x
    cout << x << " " << y << endl;
    x++;
    y++;
    cout << x << " " << y << endl;
    // cout << x++ << " " << y++ << endl; // what the fuck????
    // cout << ++x << " " << ++y << endl;
    // cout << x++ << " " << y++ << endl;
    /*
        int a = x;          ---> r value - x here refers to "x's data"
        x = 25;             ---> l value - x here refers to "x's address"
    */
    // &y = x; ---> x here refers to "x's address", hence behaving as a l value
    // *** reference variable occupies no memory at all
    // y cannot be named again
}