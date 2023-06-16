#include <iostream>
using namespace std;
int main()
{
    // // binary and: &
    // int storage[2][2];
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         /*
    //         i   j
    //         -----
    //         0   0
    //         0   1
    //         1   0
    //         1   1
    //         */
    //        storage[i][j] = i&j;
    //     }
    // }
    // cout<<"truth table for &: "<<endl;
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //        cout<<i<<" "<<j<<" "<<" "<<storage[i][j]<<endl;
    //     }
    // }
    // //------------------------------------
    // // binary or: |
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         /*
    //         i   j 
    //         -----
    //         0   0
    //         0   1
    //         1   0
    //         1   1
    //         */
    //        storage[i][j] = i|j;
    //     }
    // }
    // cout<<"truth table for |: "<<endl;
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //        cout<<i<<" "<<j<<" "<<" "<<storage[i][j]<<endl;
    //     }
    // }
    cout<<(5&7)<<endl;
    cout<<(5|8)<<endl;
    //exclusive or: XOR: if both the bits are same then result is same
    cout<<(5^5)<<endl;
    cout<<(5^7)<<endl;
    cout<<(0^7)<<endl;
    //not
    int a=1, b=0;
    cout<<a<<~a<<b<<~b<<endl;//1001
}