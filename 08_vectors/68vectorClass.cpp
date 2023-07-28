// creating vector class and hence defining a new data structure
#include <iostream>
using namespace std;

class vector
{
    int *arr; // array pointer which points to the current memory location
    int curr_size, max_size;

public:                  // defining methods publically for direct use inside main
    vector(int ms_1 = 1) // default argument sets max size as 1
    {
        curr_size = 0;
        max_size = ms_1;
        arr = new int[max_size]; // dynamic intialisation of array having max size as size
    }

    int push_back(const int d) // data being accepted to be pushed inside array
    {
        // case 1: where the max size is enough for array to not double
        // case 2: max size is reached and array size doubles
        if (curr_size == max_size)
        {
            // creating an array to store unupdated elements
            int *old_arr = arr;
            max_size = 2 * max_size;
            arr = new int[max_size];

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
    int at(int i)
    {
        return arr[i];
    }
    int front()
    {
        return arr[0];
    }
    int back()
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
    int operator[](int i) //when v1[i] is called it would return the value stored at index i of v1
    {
        return arr[i];
    }
};

int main()
{
    vector v1;        // capacity
    v1.push_back(92); // 1 //kindly do not use for loop to store these values
    v1.push_back(93); // 2
    v1.push_back(94); // 4
    v1.push_back(95); // 4
    v1.push_back(96); // 8
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
    cout<<endl;
    cout<<v1[2]<<" "<<v1.at(2)<<endl;//94 94 //works because of overloaded function
}