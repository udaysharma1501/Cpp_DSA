// #include<iostream>
// #include<queue>
// using namespace std;
// int main()
// {
//     queue<string> ATM_line;

//     ATM_line.push("person1");
//     ATM_line.push("p2");
//     ATM_line.push("p3");
//     ATM_line.push("p4");

//     ATM_line.pop(); //person1 removed

//     ATM_line.push("p5");
//     //2 3 4 5

//     while(!ATM_line.empty())
//     {
//         cout<<ATM_line.front()<<" ";
//         ATM_line.pop();
//     }
// }


#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<string> ATM_line;

    ATM_line.push("p1");
    ATM_line.push("p2");
    ATM_line.push("p3");
    ATM_line.push("p4");

    ATM_line.pop();

    while(!ATM_line.empty())
    {
        cout<<ATM_line.front()<<" ";
        ATM_line.pop();
    }
}