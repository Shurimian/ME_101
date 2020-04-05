#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

using namespace std;

const int TOTAL_JUNK{20};
const int X_Y{2};
const int WIDTH{1500};
const int LENGTH{2500};

void storeData(ifstream &data, double curves[WIDTH][LENGTH])
{
    double curve{};

    for (int indexW{}; indexW < WIDTH; ++indexW)
    {
        for (int indexL{}; indexL < LENGTH; ++indexL)
        {
            data >> curve;
            curves[indexW][indexL] = curve;
        }
    }
}

void storeJunk(ifstream &data, double junkX[TOTAL_JUNK], double junkY[TOTAL_JUNK])
{
    double x{};
    double y{};

    for (int i{}; i < TOTAL_JUNK; ++i)
    {
        data >> x >> y;
        junkX[i] = x;
        junkY[i] = y;
    }
}

int main()
{
    ifstream moonSlopes{"moonSlopes.txt"};
    ifstream spaceJunk{"spaceJunk.txt"};
    ofstream landing{"landHere.txt"};
    double curves[WIDTH][LENGTH]{};
    double junkX[TOTAL_JUNK]{};
    double junkY[TOTAL_JUNK]{};

    storeData(moonSlopes, curves);
    storeJunk(spaceJunk, junkX, junkY);

    landing << "Valid landing spot coordinates: \n";

    for (int i{1}; i <= WIDTH; ++i)
    {
        for (int j{1}; j <= LENGTH; ++j)
        {
            for (int k{}; k < TOTAL_JUNK; ++k)
            {
                if (fabs(curves[i - 1][j - 1]) < 0.5 && (i - (WIDTH / 2)) != junkX[k] && ((LENGTH / 2) - j) != junkY[k])
                {
                    landing << setw(4) << (i - (WIDTH / 2)) << setw(4) << ((LENGTH / 2) - j) << '\n';
                }
            }
        }
    }
}