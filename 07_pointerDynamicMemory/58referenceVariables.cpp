#include <iostream>
using namespace std;
int main()
{
    /*
        passing objects by reference:
             i) using pointers
            ii) using reference variables
    */
    int x = 10;
    int y = x; // x and y are two separate buckets

    int a = 11;
    int &b = a; // b and a are two variables that indicate the same bucket
                // b needs declaration and assignment togther

    // interestin shit
    int i = 50;
    int &j = i;

    i++;
    cout << i << endl
         << j << endl;
    j++;
    cout << i << endl
         << j << endl;
}