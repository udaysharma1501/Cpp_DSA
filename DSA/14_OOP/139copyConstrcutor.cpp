#include <iostream>
#include <string.h>
using namespace std;

class camera
{
    string name;
    int id;
    int selling_price;
    int mrp;

public:
    camera(string name1, int id, int selling_price, int mrp)
    {
        name = name1;
        this->id = id;
        (*this).selling_price = selling_price;
        this->mrp = mrp;
    }
    void showDetails()
    {
        cout << "name: " << name << endl
             << "id: " << id << endl
             << "selling price: " << selling_price << endl
             << "mrp: " << mrp << endl;
        // cout << "name1: " << name << endl                            //these behave the same as above
        //      << "id1: " << (this->id) << endl
        //      << "selling price1: " << (this->selling_price) << endl
        //      << "mrp1: " << (this->mrp) << endl;
    }
    // buidling a copy constructor :: object must be passed by reference beause passing by value would mean making a copy, jiska mechanism abhi tak exist he nahi karta hai
    camera(camera &c)
    {
        name = c.name;
        id = c.id;
        selling_price = c.selling_price;
        mrp = c.mrp;
    }
};

int main()
{
    camera c1("uday's camera", 3092, 600, 500);
    c1.showDetails();
    cout << "----------" << endl;
    
    camera c2(c1); // note: this works without the existance of manually made copy constructor too
    c2.showDetails();
    cout << "----------" << endl;

    camera c3 = c1; //alternative method to initialise copy constructor
    c3.showDetails();

}