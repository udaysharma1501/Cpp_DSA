#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    /*
    - - - - - -
    - - - - - -
    - - - - - -
    - - - - - -
    - - - - - -
    - - - - - -

    - - - -
    - - - -
    - - - -
    - - - -
    */
    int arr[6][6];
    for (int row = 0; row < 6; row++)
    {
        for (int coloumn = 0; coloumn < 6; coloumn++)
        {
            // cin >> arr[row][coloumn];
            arr[row][coloumn] = 1;
        }
    }
    // checking
    //  for (int row = 0; row < 6; row++)
    //  {
    //      for (int coloumn =0; coloumn<6; coloumn++)
    //      {
    //          cout<<arr[row][coloumn]<<" ";
    //      }
    //      cout<<endl;
    //  }

    int sumarr[4][4];
    /*
    sumarr[0][0] = arr[0][0/1/2] + arr[0+1][0+1] + arr[0+2][0/1/2]
    sumarr[3][3] = arr[3][3/4/5] + arr[3+1][3+1] + arr[3+2][3/4/5]
    sumarr[2][3] =
    sumarr[i][j] = arr[i+1][i+1] + arr[i][goes from i to i+2] + arr[i+2][goes from i to i+2]
                    middleRow    +          topRow              +              bottomRow
    */

    int counter = 16;
        int count = counter - 12;
    while (counter--)
    {
        int temp = 0, i = 0, j = 0;
        while (count--)
        {
            while (count--)
            {
                temp = temp + arr[i][j];
            }
        }
        sumarr[i][j] = temp - (arr[i+1][j] + arr[i+1][j+2]);
        i++;
        j++;
    }










    // print
    for (int row = 0; row < 4; row++)
    {
        for (int coloumn = 0; coloumn < 4; coloumn++)
        {
            cout << sumarr[row][coloumn] << " ";
        }
        cout << endl;
    }
}

/*

sum[i][j] = (sum of all elements from i,j to i+2, j+2) - (arr[i+1][j] + arr[i+1][j+2])


*/