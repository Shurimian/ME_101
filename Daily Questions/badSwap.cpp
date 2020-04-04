#include <iostream>

using namespace std;

void badSwap(string word1, string &word2)
{
    string tempStorage = word1;
    word1 = word2;
    word2 = tempStorage;
}

int main()
{
    string name1 = "Ryan";
    string name2 = "Fiona";

    badSwap(name1, name2);

    cout << name1 << " " << name2;

    return 0;
}