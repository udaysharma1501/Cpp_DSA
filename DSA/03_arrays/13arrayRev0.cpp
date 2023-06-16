#include <iostream>
using namespace std;

void reverseArray(int arr1[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        swap(arr1[start], arr1[end]);
        start = start + 1;
        end = end - 1;
    }
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
    cout << "elements are: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    int k = sizeof(arr) / sizeof(int);
    reverseArray(arr, k);
    cout << endl
         << "reversed elements are: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}