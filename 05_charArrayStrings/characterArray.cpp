#include <iostream>
#include <cstring>
using namespace std;
int main()
{
//     char a[100] = {'a', 'b', 'c'};       // prints garbage after abc
//     char b[100] = {'a', 'b', 'c', '\0'}; // stops upon null char
//     char c[100] = "abc";                 // alternative to atomatically invoke null char
//     //---------------------------------------------------------------------------
//     char d[] = {'a', 'b', 'c', 'd', '\0'};
//     cout << d << endl; // correct syntax
//     //---------------------------------------------------------------------------
//     char e[] = "abcdefghij";
//     cout << strlen(e)         // number of visible characters   
//          << " " << sizeof(e); //+1 because of null char                 //actual memory occupied
    cout<<endl<<"---------------------------------------------------------------------------"<<endl;
    char f[100];
    cin>>f;
    cout<<f;
    cout<<endl<<strlen(f)<<" "<<sizeof(f)<<endl;

    

}