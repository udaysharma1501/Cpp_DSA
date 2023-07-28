//problem: copy assingment makes shallow copy: soln: define copy constructor
#include<iostream>
using namespace std;

class sample
{
    int id;
    string name;
    int age;

    public:
        sample(int id, string name)
        {
            this->id = id;
            this->name = name;
        }
        void setAge(int age)
        {
            (*this).age = age;
        }
        void getdata()
        {
            cout<<id<<" "<<name<<" "<<age<<endl;
        }
};

int main()
{
    sample s1(3092, "uday");
    s1.setAge(19);

    s1.getdata();                                   //3092 uday 19

    sample s2 = s1; //copy assignment operator
    s2.getdata();                                   //3092 uday 19
    s2.setAge(20);


    s1.getdata();                                   //expected
    s2.getdata();

}