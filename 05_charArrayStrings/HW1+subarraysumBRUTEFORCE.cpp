// print the sum of each subarray and find out the largest sum
#include <iostream>
using namespace std;
int returnSubarraySum(int arr[], int n)
{
    int largest_till_now = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
                sum = sum + arr[k];

                if (largest_till_now < sum)
                {
                    largest_till_now = sum;
                }
            }
            cout << "\t\t\t\t:: subarray sum " << sum << endl;
        }
        cout << endl;
    }

    return largest_till_now;
}
int main()
{
    int n;
    cout << "enter size of array: " << endl;
    cin >> n;

    int arr[n];
    cout << "enter " << n << " elements into the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    // returnSubarraySum(arr, n);                                           //rudimentary
    cout<<"largest subarray sum is: "<<returnSubarraySum(arr, n)<<endl;
}