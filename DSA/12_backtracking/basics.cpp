/*
    - types of backtracking problem:
        1. decision - check for feasible solution
        2. optimisation - find best solution
        2. enumeration - find all solutions

    - classical problems:
        1. rat in a maze
        2. n queen
        3. sudoku
        4. knight's tour
*/
// #include <iostream>
// using namespace std;
// void fillarr(int *arr, int i, int n, int val)
// {
//     if (i == n)
//     {
//         for (int j = 0; j <= n; j++)
//         {
//             cout << arr[j] << " ";
//         }
//         return;
//     }
//     arr[i] = val;
//     fillarr(arr, i + 1, n, val + 1);
// }
// int main()
// {
//     int arr[100] = {0};
//     int n;
//     cin >> n;

//     fillarr(arr, 0, n, 1);
// }
//change sign during returning
#include<iostream>
using namespace std;
static int counter, val;
void fill_arr(int *arr, int size)
{
    //base
    if(size==counter)
    {
        for(int j=0; j<=counter; j++)
        {
            cout<<arr[j]<<" ";
        }
        return;
    }
    //rr
    arr[counter] = val;
    fill_arr(arr, counter);
    counter++, val++;
}
int main()
{
    int size;
    cin>>size;
    
    int* arr = new int[size];
    arr = {0};

    fill_arr(arr, size);
}