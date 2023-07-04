/*
classification 1: on basis of where the printing is happening
    1. while printing something through using cout inside a recursive function
        1.1. return type must be void - as there's nothing to print using cout inside main, giving the function a return type doesnt make sense
        1.2. no mention of return keyword during rr - the recursion relation is simply stated/used inside the function and not returned

    2. while printing directly through recursion
        2.1.
classification 2: on basis of direction of reursion
    1. going towards base case - tail recursion
        1.1. printing happens before recursive call
    2. going away from base case - head recursion
        2.1. recursive call happens before printing
*/
//------------------------------------------------------------------------------------------------------------------------
// #include<iostream>
// using namespace std;
// int fun1(int n)
// {
//     if(n>0)
//     {
//         cout<<n<<" ";
//         fun1(n-1);
//     }
// }
// void fun2(int n)
// {
//     if (n > 0)
//     {
//         fun2(n-1);
//         cout<<n<<" ";
//     }
// }
// int main()
// {
//     int n=3;
//     fun1(n);
//     cout<<endl;
//     fun2(n);
// }
/*
recursion tree for tail (fun1)
                                          1. main()
                                          2. fun1(3)
                                              |
                                  3. print(3)-----4. fun1(2)
                                                       |
                                           5. print(2)---6. fun1(1)
                                                              |
                                                  7. print(1)---8. fun1(0)
                                                                9. return
recursion tree for head (fun2)--------------------------------------------------------------------------
                                          1. main()
                                          2. fun2(3)
                                              |
                                  3. fun2(2)-----9. print(3)
                                      |
                           4. fun2(1)-----8. print(2)
                                |
                     5. fun2(0)-----7. print(1)
                     6. return
*/
//------------------------------------------------------------------------------------------------------------------------
/*
- task during phases:
    1. calling phase - if task is done here, the printing happens in increasing order
    2. returning phase - if task is done here, the printing happens in decreasing order

    1. (asceding order) code written before recursion - executed at calling
    2. (descending order) code written after recursion (also, the code written with the recursive call, ex: (r.c.)*2) - executed at returning


- example:
    cout<<n<<" ";
    fun(n-1)

    - ascending order
    - space complexity: O(N)

- how to find time complexity of recusive function
    - assumption: every statement in a program takes one unit of time for execution

- types of recursion
    - tail:
        - last statement is recursive call
        - all operations at calling time
        - time complexity for fun1: O(N) (recursion as well as loop)
        - space complexity for fun1: O(N) (0(1) for loop) :: HENCE LOOP SHOULD BE PREFFERED
    - head:
        - first statement is recursive call (after base condition)
        - all operations at returning time
    - tree:
        - recursive call made multiple times inside the function
    - linear:
        - recursive call has code statements above as well as below it
    - indirect:
        - multiple functions call each other recursively in a circular fashion
    - nested:
        - recursive call inside function passes argument as a recursive call
*/
//sum of first n natual numbers------------------------------------------------------------
// #include<iostream>
// using namespace std;
// int sum(int n)
// {
//     if(n>0)
//     {
//         return n + sum(n-1);
//     }
//     return 0;
// }
// int main()
// {
//     int x=4;
//     cout<<"using recursion: \t"<<sum(x)<<endl; //recursion

//     cout<<"using formula: \t\t"<<x*(x+1)/2<<endl; //direct formula

//     int temp = 0;
//     cout<<"using loop: "; //loop
//     for(int i=0; i<=x; i++)
//     {
//         temp = temp + i;
//     }
//     cout<<"\t\t"<<temp<<endl;
// }
//factorial------------------------------------------------------------
// #include<iostream>
// using namespace std;
// int fact(int num)
// {
//     if(num>0) 
//     {
//         return fact(num-1)*num; //recursive call and code (exexuted at return)
//     }
//     return 1; //base case
// }
// int main()
// {
//     cout<<fact(3);
// }
// 01126515050
//sum of array elements------------------------------------------------------------
// #include<iostream>
// using namespace std;
// int sum1(int arr[], int n)
// {
//     if(n>0)
//     {
//         return arr[0] + sum1(arr+1, n-1); 
//     }
//     return 0; //base case
// }
// int main()
// {
//     int arr[] = {1, 2, 3};
//     cout<<sum1(arr, 3)<<endl;
// }
//exponent------------------------------------------------------------
// #include<iostream>
// #include<cmath>
// using namespace std;
// long long int exp(int base, int power)
// {
//     if(power==0)
//     {
//         return 1;
//     }
//     return base*exp(base, power-1);
// }
// int main()
// {
//     cout<<exp(2, exp(2, 2));
// }
//taylor series------------------------------------------------------------
/* e^x = 1 + (x/1!) + (x^2/2!) + (x^3/3!) + ... + (x^(n-1)/(n-1)!) + (x^n/n!) */
#include<iostream>
#include<cmath>
using namespace std;
int fact(int n)
{
    if(n==0) {return 1;}
    return n*fact(n-1);
}
float taylor(static int p, static int f)
{
    
}
int main()
{
    cout<<taylor(1,1); //taylor(x) = e^x
}