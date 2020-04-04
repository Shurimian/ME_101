#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int doesNothingUseful(int passByValue, int &passByReference)
{
    passByValue++;
    passByReference++;
    return passByValue * passByReference;
}

int main()
{
    int pbv = 4;
    int pbr = 7;
    int returnValue = 0;
    returnValue = doesNothingUseful(pbv, pbr);
    cout << pbv << pbr << returnValue;
    //4 8 40

    returnValue = doesNothingUseful(pbv, pbr);
    cout << pbv << pbr << returnValue;
    //4 9 45

    return 0;
}