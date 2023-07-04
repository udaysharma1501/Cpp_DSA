// search space must be pre sorted ==>> values must be monotonic (non-dec or non-inc)
#include <iostream>
using namespace std;
/*
arr - stores searching space
size - size of arr
key - number we're looking for
*/
int binSearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key) //key lies between (start and mid) hence the search space must be updated within (start) and (mid-1)
        {
            end = mid - 1;
        }
        else if (arr[mid] < key) //key lies between (mid and end) hence the seach space must be updated within (mid+1) and (end)
        {                        //this only works (and similarly the above condition) if search space is sorted monotonously
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

    cout<<"***note: array consists of natual numbers uptil 100 (inclusive)***"<<endl;

    if (index != -1)
    {
        cout << key << " was found at: " << index + 1 << endl;
    }
    else
    {
        cout << key << " was not found" << endl;
    }
}
