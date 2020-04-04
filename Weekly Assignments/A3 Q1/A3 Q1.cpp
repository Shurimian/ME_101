#include <iostream>
#include <cstring>__msvc_all_public_headers.hpp
#include <iomanip>__msvc_all_public_headers.hpp

using namespace std;

//A3 Q1
int main()
{
	double cost{};
	int ppl{};
	double costI{};
	const double tax{ 1.15 };
	string cont{ "y" };

	while (cont == "y")
	{
		cout << "Please enter the cost of the meal: ";
		cin >> cost;
		if (cost <= 0)
		{
			do
			{
				cout << "Invalid cost. The value must be positive. Please enter again: ";
				cin >> cost;
			} while (cost <= 0);
		}

		cout << "Please enter the number of guests: ";
		cin >> ppl;

		if (ppl <= 0)
		{
			do
			{
				cout << "Invalid cost. The value must be positive. Please enter again: ";
				cin >> ppl;
			} while (ppl <= 0);
		}

		cost *= tax;
		costI = cost / static_cast<double> (ppl);
		cout << "Each person should pay $" << fixed << setprecision(2) << costI << '\n';
		cout << "Would you like to split another bill (y/n)?: ";
		cin >> cont;
	}
	cout << "Goodbye";
  return 0;
}

/*
Please enter the cost of the meal: 21.6
Please enter the number of guests: 3
Each person should pay $8.28
Would you like to split another bill (y/n)?: y

Please enter the cost of the meal: 0
Invalid cost. The value must be positive. Please enter again: -232
Invalid cost. The value must be positive. Please enter again: 294.24
Please enter the number of guests: -15
Invalid cost. The value must be positive. Please enter again: 0
Invalid cost. The value must be positive. Please enter again: 17
Each person should pay $19.90
Would you like to split another bill (y/n)?: n

Goodbye
*/