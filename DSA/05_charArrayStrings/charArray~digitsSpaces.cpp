#include <iostream>
using namespace std;
int main()
{
    // given a sentence : calculate the number of digits, spaces & alphabets in it.
    // hint: terminate input when new line is started
    int temp;
    int alphabet = 0, digit = 0, space = 0;
    while (temp != '\n')
    {
        temp = cin.get();
        if (temp >= '0' and temp <= '9')
        {
            digit++;
        }
        else if ((temp >= 65 and temp <= 90) or (temp >= 97 and temp <= 122))
        {
            alphabet++;
        }
        else if (temp == ' ' or temp == '\t')
        {
            space++;
        }
    }
    cout<<"alphabets: "<<alphabet<<endl<<"digits: "<<digit<<endl<<"spaces: "<<space<<endl;
}