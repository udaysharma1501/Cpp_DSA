//factorial without recursion
// #include <iostream>
// using namespace std;

// int factorial(int n)
// {
//     int fact = 1;
//     for(int i=1; i<=n; i++)
//     {
//         fact = fact * i;
//     }
//     return fact;
// }

// int main()
// {
//     int a = 4;
//     cout << factorial(4) << endl;
// }
//factorial using recursion
#include<iostream>
using namespace std;
int factorial(int n)
{
    //base case
    if(n==0)
    {
        return 1;
    }
    //recursive case
    return (n*factorial(n-1));
}
int main()
{
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
}