#include<iostream>
using namespace std;
class parent
{
public:
    void display()
    {
        cout<<"parent display"<<endl;
    }
};
class child : public parent
{   
public:
    void display() // derived class redefines an already inherited function 
    {
        cout<<"child display"<<endl;
    }
};
int main()
{
    child c;
    c.display();
    c.parent::display(); // SRO - varies scope
}