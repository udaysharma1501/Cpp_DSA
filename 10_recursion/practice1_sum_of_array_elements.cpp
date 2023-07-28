/*
    Write a recursive function to calculate the sum of all elements in an array
    
    write a function which accepts the array and the size of the array
    at the end returns the sum of all elements
*/
#include<iostream>
using namespace std;
int sum=0;
int sum_arr(int* arr, int n)
{
    // //base case
    // if(n == 0) {return arr[0];}
    // //recursive case
    // return (arr[n] + sum_arr(arr, n-1));
    if(n == 0) {return 0;}

    return (arr[0] + sum_arr(arr + 1, n - 1));
}

int main()
{
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<sum_arr(arr, n);
}