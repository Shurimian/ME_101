#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

const int AGE_RANGES{8};
const int RESPONSE{10};

//sortData counts how many people from each age range voted for a specific rating value
void organize(ifstream &fin, int sortData[AGE_RANGES][RESPONSE])
{
    int age{};
    int rating{};

    while (fin >> age >> rating)
    {
        for (int i{2}; i < 10; ++i)
        {
            if ((age / 10) ==  i)
            {
                ++sortData[i - 2][rating - 1];
            }
        }
    }
}

int majority(int ageRange, int sortData[AGE_RANGES][RESPONSE])
{
    int maxValue{};
    int maxIndex{};

    for (int i{}; i < RESPONSE; ++i)
    {
        if (sortData[ageRange][i] > maxValue)
        {
            maxValue = sortData[ageRange][i];
            maxIndex = i;
        }
    }

    return maxIndex + 1;
}
int main()
{
    ifstream data{"survey.txt"};
    ofstream results{"surveyResult.txt"};
    int popular[AGE_RANGES]{};
    int sortData[AGE_RANGES][RESPONSE]{};

    organize(data, sortData);

    for (int ageRange{}; ageRange < AGE_RANGES; ++ageRange)
    {
        popular[ageRange] = majority(ageRange, sortData);
    }

    for (int i{}; i < AGE_RANGES; ++i)
    {
        results << i + 2 << "0s most common response: " << popular[i] << '\n';
    }
    data.close();
    results.close();
    return 0;
}