// what is wrong with this code?
//  #include <iostream>
//  using namespace std;

// void kadanes_algo_max_subarraySum(int arr1[], int n)
// {
//     int *curr_sum = new int[n]{0};
//     int *max_sum = new int[n]{0};
//     for (int i = 0; i < n; i++)
//     {
//         if(curr_sum[i]<0 || (curr_sum[i-1] + arr1[i])<0)
//         {
//             curr_sum[i]=0;
//         }
//         curr_sum[i] = curr_sum[i-1] + arr1[i];
//     }
//     for(int i=0; i<n; i++)
//     {
//         max_sum[i] = max(max_sum[i], curr_sum[i]);
//     }
//     for(int i=0; i<n; i++)
//     {
//         cout<<max_sum[i]<<" ";
//     }
//     delete []curr_sum;
// }

// int main()
// {
//     int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
//     // int arr[] = {10, 20, 30, 40, 50, 60};
//     int n = sizeof(arr) / sizeof(int);

//     kadanes_algo_max_subarraySum(arr, n);
// }
#include <iostream>
using namespace std;

int kadanes_algo_max_subarraySum(int arr1[], int n1)
{
    int cs=0;
    int largest =0;
    for(int i=0; i<n1; i++)
    {
        cs = cs + arr1[i];
        if(cs<0)
        {
            cs = 0;
        }
        largest = max(largest, cs);
    }
    return largest;
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    // int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(int);

    cout<<kadanes_algo_max_subarraySum(arr, n)<<endl; //expected 11
}