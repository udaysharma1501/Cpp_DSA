#include<iostream>
#include"complex_header_file.h"
using namespace std;
int main()
{
    complex c1(4, 6), c2(3, 2);
    complex c3 = c1 + c2;
    cout<<"sum: "<<c3<<endl;

    complex c4 = c1 - c2;
    cout<<"sub: "<<c4<<endl;

    complex c5 = c1*c2;
    cout<<"prod: "<<c5<<endl;

    complex c6 = c1/c2;
    cout<<"div: "<<c6<<endl;

    complex c7;
    cin>>c7; 
    cout<<"usage of cin: "<<c7<<endl;
}