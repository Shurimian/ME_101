#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <string>
#include <iomanip>__msvc_all_public_headers.hpp
#include <fstream>__msvc_all_public_headers.hpp

using namespace std;

//Water Taxi A4 Q2
int main()
{
	ifstream taxi{ "taxi.txt" };
	ofstream fout{ "Taxi_Results.txt" };
	double costCul{};
	double distCul{};
	double dist{};
	double cost{};
	double highestD{};
	double lowestC{5000};
	const double tripCost{ 12 };
	const double distCost{ 2.3 };
	bool ret{ 0 };
	int trips{};
	int count{};

	fout << setw(5) << "Trip" << setw(7) << "Return" << setw(6) << "Stops" << setw(10) << "Distance"
		<< setw(8) << "Cost" << setw(12) << "Cumulative " << setw(12) << "Cumulative \n";
	fout << setw(47) << "Distance" << setw(13) << "Cost \n";

	while (taxi >> ret >> trips) //Scan for Return Trip & # of Trips
	{
		double costT{};
		double distT{};
		double xTail{};
		double yTail{};
		double xNow{};
		double yNow{};
		double xHead{};
		double yHead{};

		++count;
		for (int count{}; count < trips; ++count) //Uses # of Trips to properly read correct # of coordinate points
		{
			taxi >> xHead >> yHead;
			xNow = xHead - xTail;
			yNow = yHead - yTail;
			dist = sqrt(pow(xNow, 2.0) + pow(yNow, 2.0));
			costT += dist * distCost;
			distT += dist;
			xTail = xHead;
			yTail = yHead;

			if (ret == 1)//Calculates Return Distance IF they return
			{
				if (count == trips - 1)
				{
					dist = sqrt(pow(xHead, 2.0) + pow(yHead, 2.0));
					distT += dist;
					costT += dist * distCost;
				}

			}
		}

		costT += tripCost * trips;
		costCul += costT;
		distCul += distT;
		
		if (highestD < distT)
		{
			highestD = distT;
		}

		if (lowestC > costT)
		{
			lowestC = costT;
		}

		if (count <= 5 || ((count % 5) == 0 && (count % 10) != 0))
		{
			fout << setw(5) << count << setw(7) << ret << setw(6) << trips << setw(9)
				<< fixed << setprecision(2) << distT << setw(9) << costT << setw(11) << costCul << setw(11) << distCul << " \n";
			fout << '\n';
		}
	}

	fout << "The longest trip was " << highestD << " km. \n";
	fout << "The cheapest trip was " << lowestC << "$\n";

	return 0;
}