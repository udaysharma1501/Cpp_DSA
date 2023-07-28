#include <iostream>
#include "udaysVectorHeaderFile.h"
using namespace std;
int main()
{
    // we cut and paste the class code from '68vectorClass.cpp' and copy it to 'udaysVectorHeaderFile.h' and then import it to this file and copy paste the code inside main from '68vectorClass.cpp' to see if it works with the manually created and imported header file

    vector v1;
    v1.push_back(92);
    v1.push_back(93);
    v1.push_back(94);
    v1.push_back(95);
    v1.push_back(96);
    v1.printAllElements(v1);
    cout << endl;
    cout << v1.size() << " " << v1.capacity() << endl; // 5 8
    v1.pop_back();
    cout << v1.size() << " " << v1.capacity() << endl; // 4 8
    v1.push_back(2);                                   // 8
    v1.push_back(3);                                   // 8
    cout << v1.size() << " " << v1.capacity() << endl; // 6 8

    // 92 93 94 95 2 3 -- size=6 -- cap=8
    cout << v1.at(2) << endl;     // 94
    cout << v1.back() << endl;    // 3
    cout << v1.front() << endl;   // 92
    cout << v1.isEmpty() << endl; // 0
}