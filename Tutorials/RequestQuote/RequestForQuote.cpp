#include <iostream>
#include <cmath>
#include <cstring>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    ifstream catalog{"catalog.txt"};
    ifstream BOM{"BOMs.txt"};
    ofstream BOM_costs{"BOM_costs.txt"};
    const int MAX_PARTS{30};
    string partName[MAX_PARTS]{};
    string design[100]{};
    string designComp{};
    string designMost{};
    string designCheap{};
    int partNum[MAX_PARTS]{};
    double partPrice[MAX_PARTS]{};
    int partCount{};
    int designCount{};
    int partsUsed{};
    int partID{};
    int quantity{};
    int quantitySum{};
    int partSum{};
    double costSum{};
    double cheapCost{};
    bool breakCheck{};

    //Catalogues the File
    while (catalog>>partName[partCount]>>partNum[partCount]>>partPrice[partCount])
    {
        ++partCount;
    }

    //Heavy Lifting Output
    while ((BOM>>design[designCount]>>partsUsed)&&breakCheck==0)
    {
        BOM_costs<<design[designCount]<<'\n';

        for (int iii{}; iii < partsUsed ; ++iii)
        {
            BOM>>partID>>quantity;

            for (int iii{}; iii < partCount ; ++iii)
            {
                if (partID == partNum[iii])
                {
                    BOM_costs<<setw(16)<<partName[iii]<<"   "<<quantity<<setw(6)<<fixed<<setprecision(2)<<quantity*partPrice[iii]<<'\n';
                    costSum+=quantity*partPrice[iii];
                }
            }

            quantitySum+=quantity;

            if (quantitySum > partSum)
            {
                partSum=quantitySum;
                designMost = design[designCount];
            }
            if (costSum < cheapCost)
            {
                cheapCost=costSum;
                designCheap = design[designCount];
            }
            BOM_costs<<"Total Price: "<<fixed<<setprecision(2)<<costSum<<'\n';
            costSum=0;
        }
        
    }

    BOM_costs<<"The project with the highest amount of parts is "<<designMost<<" with "<<partSum<<" parts.\n";
    BOM_costs<<"The project with the cheapest cost is "<<designCheap<<" costing "<<cheapCost<<"$\n";
    
    return 0;
}