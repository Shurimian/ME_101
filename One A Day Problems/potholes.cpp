#include <iostream>
#include <fstream>
#include <cmath>
#include <cstring>

using namespace std;

const int TOTAL{75};

double potholeVolume(double radius)
{
    return (2.0 / 3.0) * M_PI * (pow((radius / 1000), 3.0));
}

void readFile(ifstream &fin, int position[TOTAL][TOTAL])
{
    int street{};
    int avenue{};
    int radius{};

    while (fin >> street >> avenue >> radius)
    {
        position[street - 1][avenue - 1] = radius;
    }
}

double repairVolume(int position[TOTAL][TOTAL], int index, bool stOrNaw)
{
    double totalVol{};

    if (stOrNaw == 1)
    {
        for (int i{}; i < TOTAL; ++i)
        {
            totalVol += potholeVolume(position[i][index]);
        }
    }
    else
    {
        for (int i{}; i < TOTAL; ++i)
        {
            totalVol += potholeVolume(position[index][i]);
        }
    }

    return totalVol;
}

int main()
{
    ifstream data{"potholes.txt"};
    const double BUCKET{0.25};
    double tolerance{100};
    double error{};
    int position[TOTAL][TOTAL]{};
    int repairNum{};
    bool stOrNaw{};

    if (!data)
    {
        cout << "File failed to open. ";
    }

    readFile(data, position);

    return 0;
}