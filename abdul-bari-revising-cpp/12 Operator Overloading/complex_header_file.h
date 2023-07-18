#include<iostream>
using namespace std;
#include<cmath>
class complex
{
    float real;
    float img;
    friend ostream& operator<<(ostream&, complex&);
    friend istream& operator>>(istream&, complex&);

public:
    complex(float r = 0, float i = 0) : real(r), img(i) {}

    // sum: (a1 + ib1) + (a2 + ib2) = (a1 + a2) + i(b1 + b2)
    complex operator+(complex c)
    {
        float temp_real = real + c.real;
        float temp_img = img + c.img;

        complex temp_c(temp_real, temp_img);
        return temp_c;
    }
    // subtraction
    complex operator-(complex c)
    {
        float temp_real = real - c.real;
        float temp_img = img - c.img;
        complex temp_c(temp_real, temp_img);
        return temp_c;
    }

    // product: (a + ib) * (c + id) = (ac - bd) + i(ad + bc)
    complex operator*(complex c)
    {
        float t_r = real*(c.real) - img*(c.img);
        float t_i = real*(c.img) + img*(c.real);
        complex t_c(t_r, t_i);
        return t_c;     
    }

    // div: (a + ib)/(c + id) = (ac + bd)/(c^2 + d^2) + i((bc - ad)/(c^2 + d^2))
    complex operator/(complex c)
    {
        float t_r = (real*c.real + img*c.img)/(pow(c.real, 2) + pow(c.img, 2));
        float t_i = (img*c.real - real*c.img)/(pow(c.real, 2) + pow(c.img, 2));
        complex t_c(t_r, t_i);
        return t_c;
    }
};

// overloading insertion operator
ostream& operator<<(ostream& out, complex& c)
{
    out<<c.real<<" + i"<<c.img;
    return out;
}

// overloading extraction opertor
// cin>>(complex number) should accept and set the values of real and img parts of complex number
istream& operator>>(istream& in, complex& c)
{
    in>>c.real>>c.img;
    return in;
}