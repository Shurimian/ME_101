#define _USE_MATH_DEFINES
#include <iostream>
#include <fstream>
#include <cmath>
#include <cstring>

using namespace std;

/*
a) I plan to store the pothole data in a 2D array. The first index would represent the street, the 2nd represents the avenue.
Each entry in the array would be the VOLUME of the potholes near intersection.
IMPORTANT: ASSUME we can process the pothole data Radius -> Volume before putting it into array.

*/

//b) This constant represents total number of streets/avenues
const int TOTAL{75};

//c
double volume(double rad)
{
    return (2.0 / 3.0) * M_PI * pow(rad, 3.0);
}

//d)
void storeData(ifstream &data, double pothole[TOTAL][TOTAL])
{
    int street{};
    int avenue{};
    double radius{};

    while (data >> street >> avenue >> radius)
    {
        //Streets & Avenus 1-75 are indexed from 0-74. As such, subtract 1
        pothole[street - 1][avenue - 1] += volume(radius);
    }
}

//e) ASSUME when the function says "return", it does not literally mean return statement because we haven't learned
//   a way to return multiple statements besides pass by reference. I think?
void highest(double pothole[TOTAL][TOTAL], int &highestStreet, int &highestAvenue)
{
    double highestVol{};

    //This searches the array first row, all the columns, then 2nd row, all the columns, etc
    for (int indexS{}; indexS < TOTAL; ++indexS)
    {
        for (int indexA{}; indexA < TOTAL; ++indexA)
        {
            if (pothole[indexS][indexA] > highestVol)
            {
                //+1 because we indexed the street starting from 0, but the first street starts from 1.
                highestStreet = indexS + 1;
                highestAvenue = indexA + 1;
                highestVol = pothole[indexS][indexA];
            }
        }
    }
}

//f)
int main()
{
    ifstream data{"hole.txt"};
    double pothole[TOTAL][TOTAL]{};
    int highestStreet{};
    int highestAvenue{};

    storeData(data, pothole);
    highest(pothole, highestStreet, highestAvenue);

    cout << "The intersection with the highest volume of potholes is: Street " << highestStreet << " Avenue " << highestAvenue;

    return 0;
}

//g) I would not change the way I used the array. The array is already organized as a 2D grid, the only thing I would
//   have to change if I wanted the max volume by street is to sum the volume along the streets. In otherwords, process 
//   the data from the array differently. Not change it