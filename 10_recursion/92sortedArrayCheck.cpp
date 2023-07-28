    /*
    checking for unsorted array: WHENEVER ARRAY IS UNSORTED FALSE IS RETURNED
    example:        1 2 3 5 4 6         ==>                                      |    6) whole array is unsorted                                                
                                                                                 |
                (1 < 2) 3 5 4 6         ==>                                      |    5) 2 3 5 4 6 is unsorted 
                                                                                 |
                  (2 < 3) 5 4 6         ==>                                      |    4) 3 5 4 6 is unsorted                                           
                                                                                 |
                    (3 < 5) 4 6         ==>         1) checking for array 5 4 6  |    3) 5 4 6 is unsorted 
                                                                                 |
                      (5 < 4) 6         ==>         2) returns false             |
                                                                                 |
    */
    /*
    checking for sorted array
    example:                    1 2 3   ==>
                            (1 < 2) 3   ==> 
                               (2 < 3)  ==> array is sorted : returns true
    
    */
#include<iostream>
using namespace std;

bool isSorted(int arr[], int n)
{
    //base case
    if(n == 0 or n == 1) {return true;}

    //recursive call
    if
    (
            (arr[0] < arr[1])           // checking the first two elements 
            and                         // both conditions should satisfy 
            isSorted(arr+1, n-1)        // checks the same function for remaining array as it now starts from the next index while the size of the array reduces by one
    )
    {
        return true;
    }
    return false; //if any of the above conditions doesn't satisfy

}
bool isSortedAlter(int arr[], int i, int n)
{
    if(i == (n-1)) {return true;}

    if(arr[0]<arr[1] and isSortedAlter(arr, i+1, n)) {return true;}

    return false;
}

int main()
{
    int arr[] = {1, 2, 3};
    int n = sizeof(arr)/sizeof(int);
    cout<<isSorted(arr, n)<<endl;
    cout<<isSortedAlter(arr, 0, n)<<endl;
}