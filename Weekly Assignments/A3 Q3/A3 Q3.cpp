#include <iostream>__msvc_all_public_headers.hpp
#include <fstream>__msvc_all_public_headers.hpp
#include <iomanip>__msvc_all_public_headers.hpp

using namespace std;

//A3 Q3
int main()
{

	ifstream grades{ "CHE_102_grades.txt" };

	double studentCount{};
	double high{};
	double highest{ 0 };
	double low{};
	double lowest{ 100 };
	double bestID{};
	double worstID{};
	double studentNum{};
	double markSum{};

	//Initialize lowest grade as 100 so the first value for low is extracted to lowest.

	while (grades >> studentNum >> high)
	{
		++studentCount;
		markSum += high;

		if (high > highest)
		{
			highest = high;
			bestID = studentNum;
		}
		else if (high < highest)
		{
			low = high;

			if (low < lowest)
			{
				lowest = low;
				worstID = studentNum;
			}
		}
	}

	cout << "Student with number " << setprecision(8) << bestID << " has the highest mark with a " << highest << " % average. \n";
	cout << "Student with number " << worstID << " has the lowest mark with a " << lowest << " % average. \n";
	cout << "The mean of all the students is " << fixed << setprecision(2) << markSum / studentCount << " %";
	return 0;
}

/*
Student with number 44224478 has the highest mark with a 98.48 % average.
Student with number 21619966 has the lowest mark with a 18.07 % average.
The mean of all the students is 71.34 %
*/