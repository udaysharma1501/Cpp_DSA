#include <iostream>
#include<string>
#include<string.h>
#include<algorithm>
using namespace std;
// this pointer
class product
{
    int id;
    char name[100];

public:
    // parameterised constructor
    product(int id, char *n)
    {
        this->id = id; // making a this pointer specifies to the compiler that 'this id' is the one that belongs to the class
        // (*this).id = id; //does the same function
        cout<<"id: "<<(this->id)<<endl;    
        string k = strcpy(name, n);
        cout<<"name: "<<k<<endl;
    }
};
int main()
{
    product p1(102203092, (char*)"uday");//explicitly type converting string to char*
}