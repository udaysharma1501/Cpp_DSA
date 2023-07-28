#include<iostream>
using namespace std;
int main()
{
    /*
                &(whatever value the bucket contains) ==> address
                *(address) ==> whatever value the bucket contains
    */
    int x=1;
    int* x_ptr = &x;
    cout<<x_ptr<<endl<<*x_ptr<<endl;

    cout<<(*(&x))<<endl;        //equivalent to *x_ptr

    //null pointer;
    int *p = 0;         //0 address: points to nothing, cannot be dereferenced
    int *q = NULL;
}