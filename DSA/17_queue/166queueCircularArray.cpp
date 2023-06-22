#include<iostream>
#include"queue.h"
using namespace std;
int main()
{
    queue q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    q1.push(5);
    
    q1.pop();
    q1.pop();

    q1.push(99);
    //3 4 5 99

    while(!q1.empty())
    {
        cout<<((q1).frontelement())<<" ";
        q1.pop();
    }
}