#include <iostream>
#include <cmath>
#include <iterator>
#include <fstream>
#include <cstring>
#include <iomanip>

using namespace std;

int value (string colour, string multiplier)
{
    int colourMultiple[]{200,300,400,500,600,700,800,900};
    string colours[]{"red","orange","yellow","green","blue","purple","grey","white"};
    const int TOTAL{static_cast<int>(size(colourMultiple))};

    if (colour=="brown")
    {
        if (multiplier=="brown")
        {
            return 100;
        }
        else
        {
            return 1000;
        }
        
    }

    for (int count{}; count<TOTAL;++count)
    {
        if (colour==colours[count])
        {
            return colourMultiple[count];
        }
    }
}

int redundant(string colour, string multiplier)
{
    return value(colour,multiplier);
}

int main()
{
    ifstream resist{"resist.txt"};
    ofstream report{"report.txt"};
    int resistValue[]{100,200,300,400,500,600,700,800,900,1000};
    const int TOTALVALUES{static_cast<int>(size(resistValue))};
    const int MIN_RESIST{250};
    const int TOTAL_MAX_VALUES{10};
    int maxValues[TOTAL_MAX_VALUES]{};
    int resistNum[9]{};
    int resistTotal{};
    string values{};
    string waste{};
    string multiple{};

    if (!resist)
    {
        cout<<"File failed to open\n";
    }

    while (resist>>resistTotal)
    {
        for (int count{};count<resistTotal;++count)
        {
            resist>>values>>waste>>multiple;
            
            for (int count{};count<(TOTALVALUES-1);++count)
            {
                if (redundant(values,multiple)==resistValue[count])
                {
                    ++resistNum[count];
                }
            }
        }
    }

    for (int count{};count<(TOTALVALUES-1);++count)
    {
        if (resistNum[count]<MIN_RESIST)
        {
            report<<"Need to buy "<<MIN_RESIST-resistNum[count]<<" more "<<resistValue[count]<<"ohm resistors.\n";
        }
    }

    return 0;
}