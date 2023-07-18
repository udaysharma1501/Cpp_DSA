#include<iostream>
using namespace std;
int main()
{
    int arr[] = {4, 5, 6};
    int* arr_ptr = arr;
    for(int i=0; i<3; i++)
    {
        cout<<arr[i]<<" "<<arr_ptr[i]<<endl;
    }
}

/* 
    these are same things:

    • name[i]
    • *( name + i)
    • *( i+ name )
    • i[name] 
 */