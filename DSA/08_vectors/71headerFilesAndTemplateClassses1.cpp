// adding template to generalise our created vector class for all basic supported data types and not only int
// copying complete code fom '68vectorClass.cpp' and adding template to it
#include <iostream>
using namespace std;

template <typename T>
class vector
{
    T *arr;                  // T can take any data type: int, float, bool, char, etc
    int curr_size, max_size; // these remain same as these are numbers

public:                  // defining methods publically for direct use inside main
    vector(int ms_1 = 1) // default argument sets max size as 1
    {
        curr_size = 0;
        max_size = ms_1;
        arr = new T[max_size]; // dynamic intialisation of array having max size as size
    }

    void push_back(const T d) // data being accepted to be pushed inside array
    {
        // case 1: where the max size is enough for array to not double
        // case 2: max size is reached and array size doubles
        if (curr_size == max_size)
        {
            // creating an array to store unupdated elements
            T *old_arr = arr;
            max_size = 2 * max_size;
            arr = new T[max_size];

            // copying unupdated elements in expanded array
            for (int i = 0; i < curr_size; i++)
            {
                arr[i] = old_arr[i];
            }
            // deleting old arr as its not needed anymore
            delete[] old_arr;
        }
        arr[curr_size] = d; // storing accepted element at current position
        curr_size++;        // updating current poition for the case of push back being called again
    }
    int pop_back()
    {
        if (curr_size >= 0)
            curr_size--; // current pointer moves back one left hence causing the next push back to overwrite over the last element that was stored
    }
    bool isEmpty() // upto user to check if popping is happening to a zero sized array
    {
        return curr_size == 0;
    }
    T at(int i)
    {
        return arr[i];
    }
    T front()
    {
        return arr[0];
    }
    T back()
    {
        return arr[curr_size - 1];
    }
    int size()
    {
        return curr_size;
    }
    int capacity()
    {
        return max_size;
    }
    void printAllElements(vector v2)
    {
        for (int i = 0; i < v2.size(); i++)
        {
            cout << v2.at(i) << " ";
        }
    }
    T operator[](int i) // when v1[i] is called it would return the value stored at index i of v1
    {
        return arr[i];
    }
};

int main()
{
    vector<int> v1;//we now must mention the choosen template which it integer
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
    cout<<v1[2]<<" "<<v1.at(2)<<endl;

    //---------------------------------------------
    //now after defining template we can choose a different data type
    vector<char> v_char;
    v_char.push_back('a');
    cout<<v_char[0]<<endl;
}