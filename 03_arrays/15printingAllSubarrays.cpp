#include <iostream>
using namespace std;

void printSubarrays(int arr1[], int n1)
{
    for (int start = 0; start < n1; start++) // picking first element which can range throughout the array
    {
        for (int end = start; end < n1; end++) // picking second element which can range from start to end of array
        {
            for (int counter = start; counter <= end; counter++) // picking and element that ranges in between the start and end of the previously picked elements
            {
                cout << arr1[counter] << " ";   //printing each element in between previously picked start and end
            }
            cout << endl;
        }
        cout << endl;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(int);

    printSubarrays(arr, n);
}