/*
#include<iostream>
using namespace std;

void updateViews(int views_)
{
    views_ = views_ + 1;
}

int main()
{
    int views = 100;

    updateViews(views);

    cout<<views<<endl;      //prints 100 as it's printing the from the memory stored in the call stack of main
}
*/
#include<iostream>
using namespace std;

void updateViews(int* views_)   //pointer variable stores address
{
    *views_ = *views_ + 1;      //dereference operator: (*views_) points to varibale who's address it holds
                                //                i.e.: (*views_) is equivalent to views
                                //       hence causing, views = views + 1 
}

int main()
{
    int views = 100;

    updateViews(&views);    //address of views is being passed

    cout<<views<<endl;      //since views and views_ both share the same memory (although they have different scopes), views value gets updated through passing by reference 
}
