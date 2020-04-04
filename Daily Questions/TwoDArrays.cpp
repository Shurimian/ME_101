#include <iostream>

using namespace std;

int main()
{
    const int NUM_ROWS = 7;
    const int NUM_COLS = 9;
    int array[NUM_ROWS][NUM_COLS]{};

    for (int row{}; row < NUM_ROWS; ++row)
    {
        for (int col{}; col < NUM_COLS; ++col)
        {
            if ((row + col) % 2 == 0)
            {
                array[row][col] = 1;
            }
            else
            {
                array[row][col] = 0;
            }
        }
    }

    for (int row{}; row < NUM_ROWS; ++row)
    {
        for (int col{}; col < NUM_COLS; ++col)
        {
            cout << array[row][col];
        }
        cout << '\n';
    }

    return 0;
}