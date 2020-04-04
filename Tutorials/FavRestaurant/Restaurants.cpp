#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>
#include <cmath>

using namespace std;

const int ROW { 200 };
const int COLUMN { 4 };

void slapData (ifstream& fin, int restaurantData[ROW][COLUMN])
{
    for (int iii{}; iii < ROW; ++iii)
    {
        for (int ii{}; ii < COLUMN; ++ii)
        {
            fin >> restaurantData[iii][ii];
        }
    }
}

void tallyData (int restaurantData[ROW][COLUMN], int mostCommon[COLUMN], int indexScore[COLUMN])
{
    int tally[5]{};

    for (int iii{}; iii < COLUMN; ++iii)
    {
        for (int ii{}; ii < ROW; ++ii)
        {
            for (int i{1}; i <= 5; ++i)
            {
                if (restaurantData[ii][iii] == i)
                {
                    ++tally[i-1];
                }
            }
        }

        for (int jjj{}; jjj < 5; ++jjj)
        {
            if (tally[jjj] > mostCommon[iii])
            {
                mostCommon[iii] = tally[jjj];
                indexScore[iii] = jjj + 1;
            }
        }

        for (int reset{}; reset < 5; ++reset)
        {
            tally[reset] = 0;
        }
    }
}

int main()
{
    ifstream data{ "restaurant.txt" };
    int restaurantData[ROW][COLUMN]{};
    int mostCommon[COLUMN]{};
    int indexScore[COLUMN]{};

    slapData(data, restaurantData);
    tallyData(restaurantData, mostCommon, indexScore);

    for (int iii{}; iii < 4; ++iii)
    {
        cout<<indexScore[iii] << '\n';
    }
    return 0;
}