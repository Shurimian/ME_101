#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cout << "Enter your birthday (Year, Month, Day): ";
	int bdayY{};
	int bdayM{};
	int bdayD{};
	cin >> bdayY >> bdayM >> bdayD;
	cout << "Enter the current date (same format): ";
	int currentY{};
	int currentM{};
	int currentD{};
	cin >> currentY >> currentM >> currentD;

	int age{ currentY - bdayY };

	if (currentM < bdayM)
	{
		age -= 1;
	}
	else if (currentM == bdayM)
	{
		if (currentD < bdayD)
			age -= 1;
	}
	else
	{
	}
	cout << "Age: " << age;

	return 0;
}

/*
Enter your birthday (Year, Month, Day): 2001 6 26
Enter the current date (same format): 2020 1 14
Age: 18

Enter your birthday (Year, Month, Day): 2001 6 26
Enter the current date (same format): 2001 6 27
Age: 0

Enter your birthday (Year, Month, Day): 2001 6 26
Enter the current date (same format): 2019 6 25
Age: 17

Enter your birthday (Year, Month, Day): 1982 1 25
Enter the current date (same format): 2050 1 28
Age: 68
*/