// #include<iostream>
// using namespace std;
// void swap1(int*, int*);
// int main()
// {
//     int arr[5] = {3, 2, 4, 5, 1};
//     for(int i=0; i<5; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     //sort this using bubble sort

//     for(int i=0; i<4; i++)
//     {
//         while(arr[i]>arr[i+1])
//         {
//             swap1(&arr[i], &arr[i+1]);
//         }
//     }

//     for(int i=0; i<5; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// void swap1(int* a, int* b)
// {
//     int* temp;
//     *temp = *a;
//     *a = *b;
//     *b = *temp;
// }
#include <iostream>
using namespace std;
int bubble_sort(int arr1[], int n1)
{
    for (int times = 0; times <= (n1 - 1); times++) // to select and iterate over each element
    {
        for (int j = 0; j <= (n1 - times - 1); j++) // to push the selected element until the end
        {
            if (arr1[j] > arr1[j + 1]) // checking if element to right is greater or smaller
            {
                swap(arr1[j], arr1[j + 1]); // swapping selected element and the one to its right
            }
        }
    }
}
int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);
    bubble_sort(arr, n);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    // alternative to print
    for (auto x : arr)
    {
        cout << x << ", ";
    }
}