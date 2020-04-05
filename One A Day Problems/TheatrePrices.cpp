#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const int ROW{25};
const int COLUMN{30};

void output(ofstream &next, int price[ROW][COLUMN])
{
    for (int row{}; row < ROW; ++row)
    {
        for (int column{}; column < COLUMN; ++column)
        {
            next << "Seat: " << setw(3) << row + 1 << setw(3) << column + 1 << " Price: " << price[row][column] << '\n';
        }
    }
}

void input(ifstream &ticket, int price[ROW][COLUMN])
{
    int row{};
    int column{};
    int highestPrice{};

    while (ticket >> row >> column >> highestPrice)
    {
        if (highestPrice > price[row - 1][column - 1])
        {
            price[row - 1][column - 1] = highestPrice;
        }
    }
}

int main()
{
    ifstream ticket{"tickets.txt"};
    ofstream next{"nextYear.txt"};
    int price[ROW][COLUMN]{};

    for (int row{}; row < ROW; ++row)
    {
        for (int column{}; column < COLUMN; ++column)
        {
            price[row][column] = 15;
        }
    }

    input(ticket, price);
    output(next, price);
    
    return 0;
}
