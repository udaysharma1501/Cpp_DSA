//*** see the commented out part before the uncommented part

// /*
//     addition of complex numbers:
//         c1 = (a1) + i(b1)
//         c2 = (a2) + i(b2)

//         c1 + c2 = (a1 + a1) + i(b1 + b2)
// */
// #include <iostream>
// using namespace std;
// class complex
// {
//     int real;
//     int img;

// public:
//     complex(int r = 0, int i = 0) : real(r), img(i) {}
//
//     complex add(complex c)
//     {
//         int real_temp = real + c.real; // 'real' refers to data memeber of c1 (who has called the function), where as c.real referes to te data member of c2 (who's value has been passed as a parameter)
//         int img_temp = img + c.img;    // similarly for img

//         complex c_temp(real_temp, img_temp); // initialised with the new real and img data memebers
//         return c_temp;
//     }
//     void print_()
//     {
//         cout << real << " + " << img << "i" << endl; // print method uses data members directly as they automatically refer to the object being called
//     }
// };

// int main()
// {
//     complex c1(3, 7);
//     complex c2(5, 4);
//     complex c3;

//     // c3 = c1 + c2;

//     c3 = c1.add(c2); // 'add function' is called upon c1, having c2 being passed as a parameter (passed by value)
//     c3.print_();

//     c3 = c2.add(c1);
//     c3.print_();
// }
// ------------------------------------------------------------------------------------------------------------------------------------
// 'add' function's name is changed to 'operator+'
#include <iostream>
using namespace std;
class complex
{
    int real;
    int img;

public:
    complex(int r = 0, int i = 0) : real(r), img(i) {}

    complex operator+(complex c) // 'operator' is a keyword
    {
        int real_temp = real + c.real;
        int img_temp = img + c.img;

        complex c_temp(real_temp, img_temp);
        return c_temp;
    }
    void print_()
    {
        cout << real << " + " << img << "i" << endl;
    }
};

int main()
{
    complex c1(3, 7);
    complex c2(5, 4);
    complex c3;

    c3 = c1.operator+(c2); // this statement and the one below work the same
    c3 = c1 + c2;
    c3.print_();

    c3 = c2.operator+(c1);
    c3.print_();
}