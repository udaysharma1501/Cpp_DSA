/*
// fibonacci sequence using iteration
#include <iostream>
using namespace std;

int getFib(int num)
{
    // base case

    // recursive call
}

int main()
{
    int n;
    cin>>n;
    int* arr = new int[n];
    arr[0] = 0;
    arr[1] = 1;
    for(int i=2; i<n; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }
    // for(int x : arr)
    // {
    //     cout<<x<<" ";
    // }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    delete []arr;
}
*/
//fibonacci using recursion
#include<iostream>
using namespace std;

int getfib(int n)
{
    /*
        BC1: when arr[0] is called return 0
        BC2: when arr[1] is called return 1

        recursive call: arr[n] <= arr[n-1] + arr[n-2]
    */
    if(n == 0) {return 0;}
    else if(n == 1) {return 1;}
    return (getfib(n-1)+getfib(n-2));
    
    
}

int main()
{
    int n;
    cin>>n;
    cout<<getfib(n-1)<<endl;
}