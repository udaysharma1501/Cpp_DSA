#include<iostream>
#include<cstring>
using namespace std;
class sample
{
    char name[100]; //declaring string that works similar toh get() function
    public:
        sample(char* name1) //char* works as a for loop while accepting indivisual chars to form a complete string and store it in name1
        {
            strcpy(name, name1); //copies name1 to name
            cout<<name<<endl;
            string temp_variable = strcpy(name, name1); //alterative to store and use to print
            cout<<temp_variable<<endl;
        }
};
int main()
{
    sample s1((char*)"uday"); //string being typecasted as char*
}