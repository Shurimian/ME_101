#include <iostream>
#include <cmath>
#include <fstream>
#include <iomanip>

using namespace std;

int time(int HHMM)
{
    return HHMM / 100 * 60 + HHMM % 100;
}

double dist(double X, double Y)
{
    return sqrt(pow(X, 2.0) + pow(Y, 2.0));
}

double deg(double X, double Y)
{
    double angle = 0;

    if (X <= 0)
    {
        if (Y < 0)
        {
            angle = fabs(atan(Y / X)) - M_PI;
        }
        if (Y >= 0)
        {
            angle = M_PI - fabs(atan(Y / X));
        }
    }
    else if (X > 0)
    {
        if (Y < 0)
        {
            angle = -fabs(atan(Y / X));
        }
        if (Y >= 0)
        {
            angle = fabs(atan(Y / X));
        }
    }

    return angle * 180 / M_PI;
}

int main()
{
    int HHMM = 0;
    double X = 0;
    double Y = 0;
    double distance = 0;
    double degrees = 0;
    double oldtime = 0;
    double newtime = 0;
    double shorttime = 10000000000;

    ifstream fin("wascally_wabbits.txt");
    if (!fin)
    {
        cout << "No file" << endl;
    }

    ofstream fout("results.txt");


    while (fin >> HHMM >> X >> Y)
    {

        fout << "Distance: " << setw(7) << dist(X, Y);
        fout << "  Angle: " << setw(9) << deg(X, Y) << endl;

        oldtime = newtime;
        newtime = time(HHMM);

        if ((newtime - oldtime) < shorttime)
        {
            shorttime = newtime - oldtime;
        }

    }
    fout << "Shortest Time (in minutes): " << shorttime << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}