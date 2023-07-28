#include <iostream>
using namespace std;
// prefix sums
int printSubarraySum(int arr1[], int n1)
{
    int prefix_arr[n1] = {0}; // an which has each element as the sum of all elements (including the one on the same index) before a given index from our original array.
    /*
    arr =
            1, 2, 3, 4, 5
    pref_arr =
            1, 3, 6, 10, 15

    now for example, we need to find the subarray of arr starting from 2 (i=1) to 4 (i=3)           ===> 2+3+4  ==> 9

        we simple find the difference between the elements of prefix_arr's elements at indices i=1-1 and i=3   ==> 9

    */

    prefix_arr[0] = arr1[0]; // as first element of each r
    for (int i = 1; i < n1; i++)
    {
        prefix_arr[i] = prefix_arr[i - 1] + arr1[i];
    }
    int largest_sum_till_now = 0;
    for (int start = 0; start < n1; start++)
    {
        for (int end = start; end < n1; end++)
        {
            //-------------OLD---------
            // int subarraysum = 0;
            // for (int counter = start; counter <= end; counter++)
            // {
            //     subarraysum = subarraysum + arr1[counter];
            // }
            //-------------OLD---------
            // ternary operator usage as first element to some jth element's subarray's sum would be the element of that jth index element only
            int subarraysum = (start > 0) ? (prefix_arr[end] - prefix_arr[start - 1]) : (prefix_arr[end]);
            // subarray ka sum = endth element - (startth element - 1)
            // put a check is subarrysum > largest_sum
            largest_sum_till_now = max(largest_sum_till_now, subarraysum);
        }
    }
    return largest_sum_till_now;
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    // int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(int);

    cout << "max subarray sum is: " << printSubarraySum(arr, n) << endl;
}
//methodology:
// int arr[5] = {1, 2, 4, -2, 3};
// int prefarr[5];

// prefarr[0] = arr[0];
// for (int i = 1; i < 5; i++)
// {
//     prefarr[i] = prefarr[i - 1] + arr[i];
// }

// for (int i = 0; i < 5; i++)
// {
//     cout << arr[i] << " ";
// }
// cout << endl;
// for (int i = 0; i < 5; i++)
// {
//     cout << prefarr[i] << " ";
// }

// // arr and prefarr are ready
// /*
// example:
//     query:
//         find sum of subarray of arr from i=1 to j=3
//             to do this all we would require is to subtract the (i-1)th element of prefarr from the (j)th element of prefarr
// */