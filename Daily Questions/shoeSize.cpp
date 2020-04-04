#include <iostream>
#include <fstream>

using namespace std;

const int NUM_OF_SIZES = 14;

int main()
{
    ifstream shoeIn{"shoe_sizes.txt"};
    int sizeFromFile = 0;
    int countNumSize[NUM_OF_SIZES]{};

    while (shoeIn >> sizeFromFile)
    {
        ++countNumSize[sizeFromFile];
        cout << sizeFromFile << '\n';
    }

    int mostCommonSize = 0;
    int maxSizeCount = 0;

    for (int size{}; size < NUM_OF_SIZES; ++size)
    {
        if (countNumSize[size] > maxSizeCount)
        {
            maxSizeCount = countNumSize[size];
            mostCommonSize = size;
        }
    }

    cout << mostCommonSize;
    return 0;
}