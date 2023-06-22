#include<iostream>
#include"E:\EDrive_Desktop\Codes\DSA\misc\temp_headerFile.h"
using namespace std;
int main()
{
    stack<string> s1;
    s1.push("uday");
    s1.push("uday2");
    s1.push("uday1");
    while(!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }
}