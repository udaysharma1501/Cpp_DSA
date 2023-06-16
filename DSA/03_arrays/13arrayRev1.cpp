// #include<iostream>
// using namespace std;
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
//     if(n%2==0)
//     {
//         for(int k=0; k<(n/2); k++)
//         {
//             swap(arr[k], arr[n-k-1]);
//         }
//     }
//     else
//     {
//         for(int k=0; k<((n-1)/2); k++)
//         {
//             swap(arr[k], arr[n-k-1]);
//         }
//     }

//     cout<<"reversed elements are: "<<endl;
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }

// }
//---------------------------------------------------------------------------------------------------------
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr1[] = {1, 2, 3, 4, 5};
//     for(int i=0; i<5; i++)
//     {
//         cout<<arr1[i]<<" ";
//     }
//     cout<<endl;

//     //arr2 is a copy of arr1
//     int arr2[5];

//     for(int j=0; j<5; j++)
//     {
//         arr2[j] = arr1[5-j-1];
//     }
    
//     for(int i=0; i<5; i++)
//     {
//         cout<<arr2[i]<<" ";
//     }
// }
//---------------------------------------------------------------------------------------------------------
//generalising for n
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of array: "<<endl;
    cin>>n;
    int arr1[n];
    cout<<"enter "<<n<<" elements into the array: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr1[i];
    }
    //arr2 is a copy of arr1
    int arr2[n];
    for(int j=0; j<n; j++)
    {
        arr2[j] = arr1[n-j-1];
    }
    cout<<"reversed array: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr2[i]<<" ";
    }
}