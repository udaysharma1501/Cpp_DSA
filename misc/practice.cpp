#include <iostream>
using namespace std;
int main()
{
    // intialise dynamic array and then print its reverse
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // for(auto x : arr)
    // {
    //     cout<<x<<" ";
    // }
    cout<<"original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // reversal
    cout<<"reversed array: ";
    for (int i = 0; i < (n / 2); i++)
    {
        swap(arr[i], arr[n - i - 1]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}