//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int> arr, int n, long long s)
    {
        int temp1, temp2;
        for (int start = 0; start < arr.size(); start++)
        {
            for (int end = start; end < arr.size(); end++)
            {
                int subarrsum = 0;
                for (int counter = start; counter < end; counter++)
                {
                    subarrsum = subarrsum + arr[counter];
                    temp1 = counter;
                    temp2 = start;
                    if (subarrsum == s)
                    {
                        goto label1;
                    }
                    // else
                    // {
                    //     vector<int> temp_vec = {-1};
                    //     return temp_vec;
                    // }
                }
            }
        }

    label1:
        vector<int> arr1 = {arr[temp2 - 1], arr[1]};
        return arr1;

        vector<int> temp_vec = {-1};
        return temp_vec;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long s;
        cin >> n >> s;
        vector<int> arr(n);
        // int arr[n];
        const int mx = 1e9;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> res;
        res = ob.subarraySum(arr, n, s);

        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends