#include<iostream>
using namespace std;
int main()
{
    int a = 5, b = 6, c = 7;

    if(a>b && ++c>b)
    cout<<"entered if"<<endl;

    cout<<c<<endl; // expected 8 but we get 7
    /*
        in line 7, the second statment doesnt get checked because the whole statement to be false, even one of them to be flase is enough, hence the compiler short circuits by not going to the second statement, hence the pre inc doesnt take place

        advice: do not use any inc/dec in second or further statements   
    */

    // similar example
    if(a<b || ++c<b) // second condition isnt checked because the first one is true
    cout<<"entered second if"<<endl;

    cout<<c<<endl; 
}