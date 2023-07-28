#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> arr = {10, 11, 2, 3, 4, 6, 7, 8};
    int key = 11;

    vector<int>::iterator iterator_name = find(arr.begin(), arr.end(), 11);
    cout<<(iterator_name - arr.begin())<<endl;
    cout<<&(*iterator_name)-&arr[0]<<endl;
}