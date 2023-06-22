// #include<iostream>
// #include<cstring>
// using namespace std;

// template<typename data_type>            //this works too: template<class data_type>
// void printWhatever(data_type data)
// {
//     cout<<data<<endl;
// }

// int main()
// {
//     printWhatever(5); //this works too: printWhatever<int>(5);
//     printWhatever(5.5);
//     printWhatever('u');
//     printWhatever<char>('u'); //optional to mention datatype
//     printWhatever<string>("uday");
//     printWhatever(5.56543234);

//     //IMP NOTE: 'printWhatever' function doesnt exist, it gets created when it's called
// }

// //-------------------------variable template arguments-----------------------------------
// #include<iostream>
// using namespace std;

// template<int size>
// class array
// {
//     int m_array[size];
// public:
//     int getsize() const
//     {
//         return size;
//     }

// };
// //passing           class_name<size> obj_name (ex: array<10> a1)            generates this function below: 
// // class array
// // {
// //     int m_array[10];
// // public:
// //     int getsize() const
// //     {
// //         return 10;
// //     }

// // };
// int main()
// {
//     array<10> a1;
//     cout<<a1.getsize()<<endl;
// }
//-------------------------multiple template arguments-----------------------------------
#include<iostream>
using namespace std;

template<typename T, int size>
class array
{
    T m_array[size];
public:
    int getsize() const
    {
        return size;
    }

};
int main()
{
    array<string, 1> a1;
    cout<<a1.getsize()<<endl;
    cout<<sizeof(a1)<<endl;
}