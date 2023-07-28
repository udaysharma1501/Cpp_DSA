#include<iostream>
using namespace std;

void printarr(int arr1[][100], int rows1, int coloumns1)     //mandatory to provide number of coloumns (rows - optional)
{
    for(int i=0; i<rows1; i++)
    {
        for(int j=0; j<coloumns1; j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int arr[100][100];

    int rows, coloumns;
    cout<<"enter number of rows and coloumns: "<<endl;
    cin>>rows>>coloumns;

    cout<<"enter elements (first all elements in a row, then next): "<<endl;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<coloumns; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"2D array is: "<<endl;
    printarr(arr, rows, coloumns);

}