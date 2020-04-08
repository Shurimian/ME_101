#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>

using namespace std;

double futureMoney(double deposit, double interest, int years)
{
    double accumulatedInterest{};

    for (int i{1}; i <= years; ++i)
    {
        accumulatedInterest += pow((1 + interest), i);
    }

    return deposit * accumulatedInterest;
}

int main()
{
    double deposit{};
    double interest{};
    const int TOTAL_YEAR{25};

    do
    {
        cout << "Enter money and interest rate: ";
        cin >> deposit >> interest;
    } while (deposit < 0 || interest < 0);

    for (int i{1}; i <= TOTAL_YEAR; ++i)
    {
        cout << setw(2) << i << " " << setw(9) << fixed << setprecision(2) << futureMoney(deposit, interest, i) << '\n';
    }

    return 0;
}