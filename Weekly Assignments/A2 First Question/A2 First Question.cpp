#include <iostream>
#include<cstring>
#include<cmath>

using namespace std;

int main()
{
	cout << "Input a cell structure (SC, FCC, BCC): ";
	string cell{};
	cin >> cell;
	double vol{};

	if (cell != "SC" && cell != "FCC" && cell != "BCC")
	{
		cout << "Invalid input. \n";
	}
	else
	{
		cout << "Input a radius in Angstrom: ";
		double rad{};
		cin >> rad;

		if (rad < 0.0)
		{
			cout << "Invalid input. \n";
		}
		else
		{
			if (cell == "SC")
			{
				vol = pow((2.0 * rad), 3.0);
				cout << "The volume of your unit cell is: " << vol;
			}
			else if (cell == "FCC")
			{
				vol = pow(((4.0 * rad) / sqrt(3.0)), 3);
				cout << "The volume of your unit cell is: " << vol;
			}
			else if (cell == "BCC")
			{
				vol = pow(((4.0 * rad) / sqrt(2.0)), 3);
				cout << "The volume of your unit cell is: " << vol;
			}
		}

	}

	return 0;
}

/*
Input a cell structure(SC, FCC, BCC) : SC
Input a radius in Angstrom : 2
The volume of your unit cell is : 64

Input a cell structure (SC, FCC, BCC): BCC
Input a radius in Angstrom: 3
The volume of your unit cell is: 610.94

Input a cell structure (SC, FCC, BCC): FCC
Input a radius in Angstrom: 5.5
The volume of your unit cell is: 2049.21

Input a cell structure (SC, FCC, BCC): ABC
Invalid input.

Input a cell structure (SC, FCC, BCC): SC
Input a radius in Angstrom: -1
Invalid input.
*/
