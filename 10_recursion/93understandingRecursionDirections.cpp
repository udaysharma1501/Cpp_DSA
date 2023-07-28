// // print numbers from 1 to n recursively (in increasing order and decreasing order)
// //1. decreasing order
// #include<iostream>
// using namespace std;
// int printNum_dec(int n)
// {
//     if(n==0) {return 0;}
//     cout<<n<<endl;
//     return printNum_dec(n-1); // printNum_dec(n-1); //works too!
// }
// int main()
// {
//     int n;
//     cin>>n;
//     printNum_dec(n);
// }

//2. increasing order 
#include<iostream>
using namespace std;
int printNum_inc(int n)
{
    if(n==0) {return 0;}
    printNum_inc(n-1); //switching the order
    cout<<n<<endl;
}
int main()
{
    int n;
    cin>>n;
    printNum_inc(n);
}
