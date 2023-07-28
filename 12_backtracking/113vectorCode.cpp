// when returning from base case to main -> the filled array must have all it's elements signs flipped
#include <iostream>
#include <vector> // replacing array with vector (which is passed by value instead of ref like arr)
using namespace std;
void fill_array(vector<int> arr, int i, int n, int val)
{
    // base
    if (i == n)
    {
        // print array
        cout << "in fill_array: \t";
        for (int j = 0; j < n; j++)
        {
            cout << arr[j] << " ";
        }
        return;
    }

    // rec
    arr[i] = val;
    fill_array(arr, i + 1, n, val + 1);

    // backtracking step
    arr[i] = (-1) * arr[i];
}
void print_(vector<int> arr, int n)
{
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
}
int main()
{
    vector<int> arr(100, 0);
    int n;
    cin >> n;

    fill_array(arr, 0, n, 1); // 1 2 3 4 5 ...

    cout << endl
         << "in main: \t";
    print_(arr, n);
}