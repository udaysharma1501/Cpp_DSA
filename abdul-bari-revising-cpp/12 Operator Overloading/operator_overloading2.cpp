// overloading using friend functions
#include <iostream>
using namespace std;
class complex
{
    friend complex operator+(complex, complex);
    int r;
    int i;

public:
    complex(int r_ = 0, int i_ = 0) : r(r_), i(i_) {}
    
    void print_()
    {
        cout << r << " + " << i << "i" << endl;
    }
};
complex operator+(complex c1, complex c2) // automatically understands that + is used between two complex numbers (as + is a binary operator)
{
    int tr = c1.r + c2.r; // as both complex numbers are being taken as parameters, they must make changes to their own data members
                          // no complex number is calling this function
    int ti = c1.i + c2.i;
    complex tc(tr, ti);
    return tc;
}
int main()
{
    complex c1(1, 2), c2(2, 1);
    complex c3 = c1 + c2;    
    c3.print_();
}