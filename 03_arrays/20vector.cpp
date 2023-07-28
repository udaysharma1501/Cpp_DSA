#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<int> array_name = {1, 9, 2, 3, 4}; // initialisation of vector

    // array_name.pop_back();  //4 is deleted and size is changed to 4 from 5, while capacity remains 5 
    // array_name.push_back(92);

    // cout << array_name.size() << endl;     // size = number of elemets present currently
    // cout << array_name.capacity() << endl; // capacity = how many elements can it store maximium

    // for (int i = 0; i < array_name.size(); i++) // to print elements
    // {
    //     cout << array_name[i] << " ";
    // }
    // cout << endl;

    // // fill constructor
    // vector<int> array_name1(10, 7); // creates 10 elements having value as 7
    //---------------------------------------------------------------------------------------------------
    // understanding pushback
    // https://www.youtube.com/watch?v=JcSKHyizDW4
    vector<int> arr = {10, 20, 30};
    cout<<arr.size()<<" "<<arr.capacity()<<endl;        //3 3
    cout<<"address: "<<(&arr)<<endl;
    arr.push_back(40);
    cout<<arr.size()<<" "<<arr.capacity()<<endl;        //4 6
    cout<<"address: "<<(&arr)<<endl;
    arr.push_back(50);
    cout<<arr.size()<<" "<<arr.capacity()<<endl;        //5 6
    cout<<"address: "<<(&arr)<<endl;
    //---------------------------------------------------------------------------------------------------
    // understanding popback    
    // https://www.youtube.com/watch?v=opAnlfre-Kw
    // vector<int> arr1 = {10, 20, 30};
    // cout<<arr1.size()<<" "<<arr1.capacity()<<endl;
    // for(int i=0; i<arr1.size(); i++)
    // {
    //     cout<<arr1[i]<<" ";
    // }
    // cout<<endl;

    // arr1.pop_back();                                                //deletes last element to reduce new size to (old size - 1)

    // cout<<arr1.size()<<" "<<arr1.capacity()<<endl;
    // for(int i=0; i<arr1.size(); i++)
    // {
    //     cout<<arr1[i]<<" ";
    // }
    // cout<<endl;
}

// DO HW AFTER DOING VECTORS IN DETAIL