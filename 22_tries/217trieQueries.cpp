#include <iostream>
#include "214trieClass_header_file.h"
using namespace std;
int main()
{
    string words[] = {"hello", "he", "apple", "ape", "news"};

    trie t1;

    for (auto word : words)
    {
        t1.insert(word);
    }

    string word1;
    cin >> word1;

    cout << t1.search(word1) << endl;
}