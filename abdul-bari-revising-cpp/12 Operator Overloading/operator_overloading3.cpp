// overloading insertion and extraction operators - 'cout<<' and 'cin>>'

//using member function
// #include<iostream>
// using namespace std;
// class complex
// {
//     int real;
//     int img;
// public:
//     complex(int r=0, int i=0):real(r), img(i){}

//     void print_()
//     {
//         cout << real << " + " << img << "i" << endl;
//     }
// };
// int main()
// {
//     complex c1(3, 7);
//     c1.print_();
// }
// ------------------------------------------------------------------------------------------------------------
// doing the same thing but by using overloading
// #include <iostream>
// using namespace std;
// class complex
// {
//     friend ostream& operator<<(ostream&, complex&);
//     int real;
//     int img;

// public:
//     complex(int r = 0, int i = 0) : real(r), img(i) {}
// };
// /*
//     function name - usage of '<<' will operate on the 'cout_' object of ostream class and 'c' object of complex class
//     return type
//         - of the type ostream because the returning statment will give back an object of the ostream class back to main
//         - returning by ref --->
//     parameters
//         - passing by ref --->
// */
// ostream &operator<<(ostream &out, complex &c) // this is made friend as it takes parameters from two different classes
// {
//     out << c.real<< " + i"<<c.img<<endl;
//     return out;
// }
// int main()
// {
//     complex c1(3, 7);
//     cout<<c1; // operator<<(cout, c1); // behaves the same way    
// }
// ------------------------------------------------------------------------------------------------------------
// making the return type of overloaded function to be void instead of 'ostream &' & removing the return statement from definition
// #include <iostream>
// using namespace std;
// class complex
// {
//     friend void operator<<(ostream&, complex&);
//     int real;
//     int img;

// public:
//     complex(int r = 0, int i = 0) : real(r), img(i) {}
// };
// /*
//     function name - usage of '<<' will operate on the 'cout_' object of ostream class and 'c' object of complex class
//     return type
//         - of the type ostream because the returning statment will give back an object of the ostream class back to main
//         - returning by ref --->
//     parameters
//         - passing by ref --->
// */
// void operator<<(ostream &out, complex &c) // this is made friend as it takes parameters from two different classes
// {
//     out << c.real<< " + i"<<c.img<<endl;
// }
// int main()
// {
//     complex c1(3, 7);
//     cout<<c1; // operator<<(cout, c1); // behaves the same way

//     // making the change causes us to become unable to use concatnate the operator
//     // complex c2(7, 3);
//     // cout<<c1<<c2;        // this isnt possible now
// /* 
//     to make concatnation possible we must use the ostream return type because -

//     returning 'cout' replaces the first function call 'cout<<c1' with 'cout' itself hence making the whole thing act as 'cout<<c2'    
    
//     *** try this is thing using the ostream return type
//  */
// }