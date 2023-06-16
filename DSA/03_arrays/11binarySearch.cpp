// search space must be pre sorted ==>> values must be monotonic (non-dec or non-inc)
#include <iostream>
using namespace std;

int binSearch(int arr1[], int n1, int key1)
{
    int start = 0;
    int end = n1 - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr1[mid] == key1)
        {
            return mid;
        }
        else if (arr1[mid] > key1)
        {
            end = mid - 1;
        }
        else if (arr1[mid] < key1)
        {
            start = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[100];
    for (int i = 0; i < 100; i++)
    {
        arr[i] = i + 1;
    }
    int n = sizeof(arr) / sizeof(int);

    int key;
    cout << "enter key: " << endl;
    cin >> key;

    int index = binSearch(arr, n, key);

    if (index != -1)
    {
        cout << key << " was found at: " << index + 1 << endl;
    }
    else
    {
        cout << key << " was not found" << endl;
    }
}
