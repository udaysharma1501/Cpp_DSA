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
/* //decreasing = tail recursion
#include <iostream>
using namespace std;
//as the code (being executed) is written before the recursive call --> tail recursion
void count(int n)
{
    // base case
    if(n==0){return;}

    //code
    cout<<n<<" ";

    //recursive relation
    count(n-1);
}
int main()
{
    int n;
    cin>>n;
    count(n);
} */
/* //increasing = head recursion
#include <iostream>
using namespace std;
//recursive call is before the code execution --> tail recursion
void count(int n)
{
    // base case
    if(n==0){return;}

    //recursive relation
    count(n-1);

    //code
    cout<<n<<" ";
}
int main()
{
    int n;
    cin>>n;
    count(n);
} */

/* //fibonacci sequence
#include<iostream>
using namespace std;

int fib(int index)
{
    //base case
    if(index==0) {return 0;}
    if(index==1) {return 1;}

    // //code
    // int chotiProblem = fib(index-1) + fib(index-2);
    // int badiProblem = chotiProblem;    

    // //recursive relation
    // return badiProblem;
    return (fib(index-1) + fib(index-2));
}

int main()
{
    int index;
    cin>>index;
    cout<<fib(index-1);
}
*/
/*
//count climbing stairs
#include<iostream>
using namespace std;

int number_of_ways_to_jump_to_given_stair(int nStairs)
{
    //base case
     
        // 1. n<0       ---> shouldnt exist
        // 2. stair = 0 ---> 1 way ---> 1 jump
    
    if(nStairs<0) {return 0;}
    if(nStairs==0) {return 1;}
    //code
    

    //recursive call
    //f(n) = f(n-1) + f(n-2) // '+' is used as an OR operator
    int ans = number_of_ways_to_jump_to_given_stair(nStairs - 1) + number_of_ways_to_jump_to_given_stair(nStairs - 2);
    return ans;
}
int main()
{
     
    // to reach the nth stair
    //                     if last jump was 1 jump
    //                     then last stair was (n-1)th stair

    //                     if last jump was 2 jumps
    //                     then last stair was (n-2)th stair
    
    int nStairs;
    cin>>nStairs;
    cout<<number_of_ways_to_jump_to_given_stair(nStairs);
}
*/
/* 
//say digits
#include<iostream>
using namespace std;

void sayDigits(int num)
{
    //base
    if(num==0) {return;}

    //rr
    sayDigits(num/10);  //as this is a case of head recursion
    
    //code
    cout<<num%10<<" ";
    
}

int main()
{
    int n;
    cin>>n;
    sayDigits(n);
} 
*/
/* //isSorted?
#include<iostream>
using namespace std;
bool isSorted(int arr[], int size)
{
    //base
    if(size==0 or size==1) {return true;}
    if(arr[0] > arr[1]) {return false;}
    //code
    //rr
    else
    {
        bool remaining = isSorted(arr+1, size-1);
        return remaining;
    }
}
int main()
{
    int arr[] = {1, 2, 3};
    int n = sizeof(arr)/sizeof(int);
    cout<<isSorted(arr, n)<<endl;

} */
/* //sum of array elements
#include<iostream>
using namespace std;
int sum(int arr[], int size)
{
    if(size==0) {return 0;}
    if(size==1) {return arr[0];}

    return (arr[0] + sum(arr+1, size-1));
}
int main()
{
    int arr[5] = {2, 4, 9, 9, 9};
    int size = sizeof(arr)/sizeof(int);

    cout<<sum(arr, size)<<endl;
} 
*/
/* //linear search
#include<iostream>
using namespace std;

bool l_search(int arr[], int size, int key)
{
    //base case
    if(size==0) {return false;}

    //code
    if(arr[0] == key) {return true;}
    else
    return l_search(arr+1, size-1, key);

}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    cout<<l_search(arr, 5, 10);
} 
*/
// binary search
#include <iostream>
using namespace std;

bool binary_search(int arr[], int start, int end, int key)
{
    // base
    if (start > end)
    {
        return 0;
    }
    // code
    int mid = (start + end) / 2;
    if(key==arr[mid]) {return true;}
    // rr
    if (key < arr[mid])
    {
        return binary_search(arr, start, mid - 1, key);
    }
    else
    {
        return binary_search(arr, mid + 1, end, key);
    }
}
int main()
{
    int arr[] = {99, 101, 103, 105};
    cout << binary_search(arr, 0, 4, 1) << endl;
}