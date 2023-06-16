#include<iostream>
using namespace std;
int main()
{
    // char one_word[100];
    // cin>>one_word;
    // cout<<one_word;

    cout<<1<<endl;
    // char temp;
    // while(temp != '#')              //termination char for condition to invoke stoppage :: can also use \n to terminate upon entreing a new line
    // {
    //     temp = cin.get();            //invokes input buffer
    //     cout<<temp;
    // }
    char temp1;
    int i=0;
    char arr[100];
    int length=0;
    while(temp1 != '#')              
    {
        temp1 = cin.get();
        arr[i] = temp1;
        i++;
        length++;
    }
    // cout<<arr<<endl;
    arr[length] = '\0';
    for(int k=0; k<length; k++)
    {
        cout<<arr[k];
    }
}