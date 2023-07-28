#include<iostream>
using namespace std;
int main()
{
    int a=1;
    cout<<reinterpret_cast<size_t>(&a);
}