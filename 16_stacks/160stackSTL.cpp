#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string> names;
    names.push("uday");
    names.push("ria");
    names.push("max");
    names.push("bruno");

    while(!names.empty())
    {
        cout<<names.top()<<" ";
        names.pop();
    }

}