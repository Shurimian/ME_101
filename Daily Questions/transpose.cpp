#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const int ROWS_AND_COLUMNS = 10;

void swap(int &word1, int &word2)
{
    int temp = word1;
    word1 = word2;
    word2 = temp;
}

void transpose(int tableOfWords[ROWS_AND_COLUMNS][ROWS_AND_COLUMNS])
{
    for (int row{}; row < ROWS_AND_COLUMNS; ++row)
    {
        for (int column{}; column < ROWS_AND_COLUMNS; ++column)
        {
            swap(tableOfWords[row][column], tableOfWords[column][row]);
        }
    }
}

int main()
{
    int words[ROWS_AND_COLUMNS][ROWS_AND_COLUMNS]{};
    int value{};

    for (int row{}; row < ROWS_AND_COLUMNS; ++row)
    {
        for (int column{}; column < ROWS_AND_COLUMNS; ++column)
        {
            words[row][column] = value;
            ++value;
        }
    }    
    
    transpose(words);
    for (int row{}; row < ROWS_AND_COLUMNS; ++row)
    {
        for (int column{}; column < ROWS_AND_COLUMNS; ++column)
        {
            cout << words[row][column] << " ";
        }
        cout << '\n';
    }
    return 0;
}