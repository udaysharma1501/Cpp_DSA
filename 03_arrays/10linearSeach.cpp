#include <iostream>
using namespace std;
int linearSeach(int arr1[], int n1, int key1)
{
    for (int i = 0; i < n1; i++)
    {
        if (arr1[i] == key1)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[100], n, key;

    for (int i = 0; i < 100; i++)
    {
        arr[i] = i + 1;
    }

    n = sizeof(arr) / sizeof(int);

    cout << "enter key: " << endl;
    cin >> key;

    int index = linearSeach(arr, n, key);

    if (index != -1)
    {
        cout << key << " was found at: " << index + 1 << endl;
    }
    else
    {
        cout << "element not found!" << endl;
    }
}