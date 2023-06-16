#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
// print all subarrays

int maxSumSubarray(vector<int> arr1)
{
    for (int start = 0; start <= (arr1.size() - 1); start++)
    {
        int temp=0;
        for (int end = start; end <= (arr1.size() - 1); end++)
        {
            int sum =0;
            for (int counter = start; counter <= end; counter++)
            {
                // cout << arr1[counter] << " ";
                sum = sum + arr1[counter];
            }
            if(temp<sum)
            {
                temp = sum;
            }
        }
        return temp;
    }
}

int main()
{
    // int arr[] = {-10, -10000000, 0, 7, 5, 100002929};
    vector<int> arr = {1, -2, 3, 4, 4, -2};
    

    for(int x : arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<maxSumSubarray(arr);
}