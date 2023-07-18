#include<iostream>
using namespace std;
int main()
{
    int x = 10;
    int &y = x; // reference variable ---> y is another name for x

    cout << x << " " << y << endl;
    x++;
    // cout << x << " " << y << endl;
    y++;
    // cout << x << " " << y << endl;


    cout << x++ << " " << y++ << endl;
    cout << ++x << " " << ++y << endl;
}