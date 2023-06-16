#include <iostream>
using namespace std;

class sample
{
    int n;

public:
    void setn(int n)
    {
        this->n = n;
    }
    void getn()
    {
        cout << n << endl;
    }
};

int main()
{
    sample s1; // to show that the class is working
    s1.setn(2);
    s1.getn();

    sample s2;
    sample *ptr_s2 = &s2;

    // ptr_s2.setn(3); //doesnt work as ptr_s2 stores an address and is actually just a numeric value & not an object

    // option 1: dereferencing that pointer to a reference variable (which derefs and points our object 's2')
    sample &temp = *ptr_s2; // sample &temp = s2;
    temp.setn(3);
    temp.getn();

    // option 2: directly use deref pointer : shortcut being arrow pointer
    (*ptr_s2).setn(4);
    (*ptr_s2).getn();
    //alternative
    ptr_s2->setn(5);
    ptr_s2->getn();
}