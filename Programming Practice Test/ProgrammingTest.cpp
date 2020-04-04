#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream survey{"survey.txt"};
    const int RATING_VALUES{6};
    double totalCount{};
    int currentValue{};
    int ratingCount[RATING_VALUES]{};

    while (survey >> currentValue)
    {
        ++totalCount;
        ++ratingCount[currentValue];
    }

    for (int i{}; i < RATING_VALUES; ++i)
    {
        cout << ratingCount[i] / totalCount << "% of people rated the weather " << i << '\n';
    }
    return 0;
}