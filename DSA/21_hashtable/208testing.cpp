#include<iostream>
#include"205hashtable_header_file.h"
using namespace std;
int main()
{
    hashtable<int> ht1;
    ht1.insert("uday", 19);
    ht1.insert("ria", 16);
    ht1.insert("arch", 45);

    ht1.print();
}