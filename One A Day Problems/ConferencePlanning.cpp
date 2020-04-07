#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int MAX{75};

int searchName(string name[], int totalName, string searchName)
{
    bool check{};

    for (int i{}; i < totalName; ++i)
    {
        if (name[i] == searchName)
        {
            check = 1;
            return i;
        }
    }

    if (check == 0)
    {
        return -1;
    }
}

int totalData(ifstream &data, string name[], int attendants[MAX])
{
    int trash{};
    int attendant{};
    int index{};
    string names{};

    while (data >> trash >> names >> attendant)
    {

        name[index] = names;

        for (int i{}; i <= index; ++i)
        {
            if (names == name[i])
            {
                attendants[i] += attendant;
                ++index;
            }

            //Checks for uniqueness
            if (name[index] == name[i] && index != i)
            {
                --index;
            }
        }
    }

    return index + 1;
}

int superiorUni(string name[], int attendants[MAX], int totalUni)
{
    int counter{};
    int index{};
    int superior{};

    for (int i{}; i < totalUni; ++i)
    {
        if (name[i] == "UW")
        {
            index = i;
        }
    }

    for (int i{}; i < totalUni; ++i)
    {
        if (attendants[i] > attendants[index])
        {
            ++superior;
        }
    }

    return superior;
}

int main()
{
    ifstream data{"attendance.txt"};
    string name[MAX]{};
    int attendants[MAX]{};
    int totalUni{};
    int superior{};

    totalUni = totalData(data, name, attendants);
    superior = superiorUni(name, attendants, totalUni);
    cout << "There are " << superior << " universities with greater attendance.";

    return 0;
}