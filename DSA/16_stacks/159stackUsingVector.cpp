#include<iostream>
#include"stackVector_header_file.h"
using namespace std;
int main()
{
    stack<int> s1;
    s1.push(5);
    s1.push(25);
    s1.push(125);

    while(!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }
}