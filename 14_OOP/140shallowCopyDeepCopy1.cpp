#include <iostream>
#include <cstring>
using namespace std;

class camera
{
    char *name;
    int id;
    int selling_price;
    int mrp;

public:
    camera() { cout << "inside default constructor"; }
    camera(char *name1, int id, int selling_price, int mrp)
    {
        strcpy(name, name1);
        name = new char[strlen(name1)+1];
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
        // name = c.name; //this syntax gives error as name is an array of chars
        strcpy(name, c.name);
        id = c.id;
        selling_price = c.selling_price;
        mrp = c.mrp;
    }
};

int main()
{
    camera c1((char *)"uday's camera", 3092, 600, 500);
    c1.showDetails();
    cout << "----------" << endl;

    camera c2(c1); // note: this works without the existance of manually made copy constructor too
    c2.showDetails();
    cout << "----------" << endl;

    camera c3 = c1; // alternative method to initialise copy constructor
    c3.showDetails();
}