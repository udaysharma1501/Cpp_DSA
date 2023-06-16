#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> arr = 
                            {{1, 2, 3}, //3 elements
                            {99, 98}, //2
                            {22, 43, 54, 23}, //4 
                            {9}}; //1
    cout<<arr[0][0]<<endl;//1
    arr[1][1] = arr[2][3] + 44; //67<<==23+44 
    cout<<arr[1][1]<<endl;//67

    for(int i=0; i<arr.size(); i++) //IMP: arr.size() ==> number of rows
    {
        //using for each loop for variabale number coloumns in each row
        for(int variable_name : arr[i])
        {
            cout<<variable_name<<" ";
        }
        cout<<endl;
    }
}