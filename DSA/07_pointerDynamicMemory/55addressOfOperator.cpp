#include <iostream>
using namespace std;
int main()
{
    // address of operator
    int x = 1;
    cout << x << endl
         << (&x) << endl;
    //------------------------
    // pointer variable
    int y = 2;
    int *y_pointer;
    y_pointer = &y;
    //------------------------
    // address of pointer variable
    cout << (&y_pointer) << endl;
    //------------------------
    // pointer to pointer variable
    int **y_pointer_pointer = &y_pointer;
    cout << y << endl
         << y_pointer << endl
         << y_pointer_pointer << endl;
}