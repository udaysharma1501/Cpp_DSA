#include <iostream>
using namespace std;
// subarraysum using brute force
void printSubarraySum(int arr1[], int n1)
{
    for (int start = 0; start < n1; start++)
    {
        for (int end = start; end < n1; end++)
        {
            int largest_sum_till_now = 0; // to intialise the final sum of an subarray (which is to be retuned later)
            for (int counter = start; counter <= end; counter++)
            {
                cout << arr1[counter] << " ";
                largest_sum_till_now = largest_sum_till_now + arr1[counter]; // updation: each element being added to a collective sum
            }
            cout << "==> " << largest_sum_till_now << endl; // reporting sum of the iterated subarry
            cout << endl;
        }
        cout << endl;
    }
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    // int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(int);

    printSubarraySum(arr, n);
}
//-------------------------------------------------------
// alternative way to calc sub array sum ONLY (with out printing the subarrays)
// #include <iostream>
// using namespace std;
// // subarraysum using brute force
// int printSubarraySum(int arr1[], int n1)
// {
//     int largest_sum_till_now = 0;
//     for (int start = 0; start < n1; start++)
//     {
//         for (int end = start; end < n1; end++)
//         {
//             int subarraysum = 0;
//             for (int counter = start; counter <= end; counter++)
//             {
//                 subarraysum = subarraysum + arr1[counter];
//             }
//             //put a check 'is subarrysum > largest_sum?'
//             largest_sum_till_now = max(largest_sum_till_now, subarraysum);
//         }
//         cout << endl;
//     }
//     return largest_sum_till_now;
// }

// int main()
// {
//     int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
//     // int arr[] = {10, 20, 30, 40, 50, 60};
//     int n = sizeof(arr) / sizeof(int);

//     cout<<"max subarray sum is: "<<printSubarraySum(arr, n)<<endl;
// }