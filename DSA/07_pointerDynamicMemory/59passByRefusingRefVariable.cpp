#include <iostream>
using namespace std;

void applyTax1(float income_1)
{
    float tax = 0.10;
    income_1 = income_1 - income_1 * tax;
}
void applyTax2(float &income_2) // making it a ref variable causes it to share memory with the variable being passed into it.
{
    float tax = 0.10;
    income_2 = income_2 - income_2 * tax;
}

int main()
{
    float income1 = 100;

    applyTax1(income1); // 100 - 10 = 90 remains in the call stack of applyTax

    cout << "income1 (post applyTax): " << income1 << endl; // prints the memory from call stack of main

    //------------------

    float income2 = 100;

    applyTax2(income2); // income2 and income_2 have separate scopes but share the same memory

    cout << "income2 (post applyTax): " << income2 << endl;
}