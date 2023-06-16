#include<iostream>
using namespace std;

void selection_sort(int arr1[], int n1)
{
    for(int pos=0; pos<=(n1-2); pos++) //selecting lowest element and bringing it to the left will cause the last element to automatically become sorted
    {
        int current = arr1[pos];

        //loop to find out minimum element
        for(int k=pos; k<n1; k++)
        {
            
        }
    }
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);
    selection_sort(arr, n);
    for(auto x : arr)
    {
        cout<<x<<", ";
    }
}