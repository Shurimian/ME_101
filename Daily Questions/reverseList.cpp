#include <iostream>

using namespace std;

void reverseNames(string listOfNames[], int numOfNames)
{
    string tempName{};

    for (int i{}; i < (numOfNames / 2) + 1; ++i)
    {
        tempName = listOfNames[numOfNames - 1 - i];
        listOfNames[numOfNames - 1 - i] = listOfNames[i];
        listOfNames[i] = tempName;
    }
}

int main()
{
    string listOfNames[]{"1", "2", "3", "4", "5"};
    
    for (int i{}; i < 5; ++i)
    {
        cout << listOfNames[i] << '\n';
    }

    reverseNames(listOfNames, 5);

    for (int i{}; i < 5; ++i)
    {
        cout << listOfNames[i] << '\n';
    }

    return 0;
}