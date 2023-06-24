/*
    1. base case mein return mandatory hai but recursive call mein nahi hai
    2.
*/
/*
//factorial code
#include <iostream>
using namespace std;

int fact(int n)
{
    //base case
    if(n==0) {return 1;}

    //recursive case
    // int chotiProblem = fact(n-1);
    // int badiProblem = n*chotiProblem;
    // return badiProblem;
    return n*fact(n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<fact(n);
}
*/
/*
    directions of recursion
                                tail recursion              head recursion

                                func()                      func()
                                base case                   base case
                                processing                  recursive relation
                                recursive relation          processing

    tail recursion - going towards the base case
    head recursion - going away from base case
 */
/*
//power of 2 code
#include<iostream>
using namespace std;

int powerof2(int n)
{
    //base case
    if(n == 0) {return 1;}

    // //code
    // int chotiProblem = powerof2(n-1);
    // int badiProblem = 2 * chotiProblem;

    // //recursive call
    // return badiProblem;

    return 2 * powerof2(n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<powerof2(n)<<endl;
}
*/
// counting code
#include <iostream>
using namespace std;

int count(int n)
{
    // base case
    if(n==0){return;}

    //code
    cout<<n<<" ";

    //recursive relation
    return count(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<count(n);
}