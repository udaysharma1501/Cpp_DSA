#include <iostream>
using namespace std;

void insertion_sort(int arr1[], int n)
{
    for (int i = 1; i <= (n - 1); i++) // i goes from 1 to (n-1) because i=0 is a sorted array in itself while all other elements to the right must be put to the right positions whilst bringing them to the left
    {
        int current_element = arr1[i]; // temp variable to store element of interest
        int prev_index = i - 1;      // to assign the element to be replaced on the left

        // loop to find the correct index as to where the current element must be inserted
        while (prev_index >= 0 and arr1[prev_index] > current_element) // to shift element to the left :: cond1: to make sure it doesnt go beyond index=0, cond2: to make sure if element on left is bigger than our element only then is the loop block entered
        {
            arr1[prev_index + 1] = arr1[prev_index]; // to copy element on left to our original position
            prev_index = prev_index - 1;             // to shift prev to left for next iteration as the same element of interest now must be compared to the element on left to left to it's first original position
        }

        arr1[prev_index + 1] = current_element; //when all elements are moved to the right and an empty space for our element of interest is made, we shift prev by one index to the right (empty space) and input our element of interest there
    }
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);
    insertion_sort(arr, n);
    for (int x : arr) // using 'auto' inplace of int works too
    {
        cout << x << ", ";
    }
}