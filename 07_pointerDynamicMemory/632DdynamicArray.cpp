#include <iostream>
#include <vector>
using namespace std;

int **create2Darray(int rows1, int coloumns1)
{
    int **arr1 = new int *[rows1]; // creating array that stores the addresses of each row

    // allocating memory for each row having, elements = no. of coloumns
    for (int i = 0; i < rows1; i++)
    {
        arr1[i] = new int[coloumns1]; // creation of 2nd dimension of array
    }

    // initialising array
    int val = 0;
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < coloumns1; j++)
        {
            arr1[i][j] = val;
            val++;
        }
    }
    /*
    0 1 2
    3 4 5
    6 7 8
    */
    return arr1;
}

int main()
{
    int rows, cols;
    cin >> rows >> cols;

    int **arr = create2Darray(rows, cols); // dynamic initialisation of arr contining addresses of rows

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    delete[] arr;
}
/*
2D dynamic array:
                1) allocate memory row by row, treating each row as a 1D dynamic array
                2) addresses of each row's first element must be stored in another array which is
                                                                                            - an array of pointers
                                                                                            - also located in heap
*/