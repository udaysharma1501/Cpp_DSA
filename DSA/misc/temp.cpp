#include<iostream>
using namespace std;
bool check1()
{
    return 69==420;
}
bool check2()
{
    return 69==69;
}
int main()
{
    cout<<check1()<<" "<<check2()<<endl; //0 1
}