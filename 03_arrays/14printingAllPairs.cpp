#include<iostream>
using namespace std;
void printAllPairs(int arr1[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            cout<<arr1[i]<<" "<<arr1[j]<<endl;
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"enter size of array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter "<<n<<" elements into the array: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"elements are: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<endl<<"list of pairs are: "<<endl;
    printAllPairs(arr, n);
}
// //to get reapeated pairs such as (5, 1) even after getting (1, 5)
// #include<iostream>
// using namespace std;
// void printAllPairs(int arr1[], int n)
// {
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<n; j++)
//         {
//             cout<<arr1[i]<<" "<<arr1[j]<<endl;
//         }
//         cout<<endl;
//     }
// }
// int main()
// {
//     int n;
//     cout<<"enter size of array: "<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"enter "<<n<<" elements into the array: "<<endl;
//     for(int i=0; i<n; i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"elements are: "<<endl;
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     cout<<endl<<"list of pairs are: "<<endl;
//     printAllPairs(arr, n);
// }