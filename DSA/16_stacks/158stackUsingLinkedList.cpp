#include<iostream>
#include"stackLL_header_file.h"
using namespace std;
int main()
{
    stack<char> s1;
    s1.push('h');
    s1.push('e');
    s1.push('l');
    s1.push('l');
    s1.push('o');

    while(!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }
}