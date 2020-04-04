/*
Ronald

*/

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstring> 
using namespace std;

//Question 1
//int main()
//{
//    int side_length{};
//    cout << "Enter a side length: ";
//    cin >> side_length;
//    cout << "The square of " << side_length << " is " << side_length * side_length << endl;
//    cout << "& the cube of " << side_length << " is " << side_length * side_length * side_length << endl;
//
//    return 0;
//}

/*
Enter a side length: 2
The square of 2 is 4
& the cube of 2 is 8
*/

//Question 2
//int main()
//{
//	const double convert{ 1852.0 / 1000.0 };
//	cout << "Enter a distance in nautical miles: ";
//	double distance{};
//	cin >> distance;
//	cout << "Your distance in kilometres is: " << distance * convert << '\n';
//	cout << "Your distance in cable lengths is: " << distance * convert / 10 << '\n';
//	cout << convert;
//	return 0;
//}

/*
Enter a distance in nautical miles : 5
Your distance in kilometres is : 9.26
Your distance in cable lengths is : 0.926
*/

//Question 3
//int main()
//{
//	cout << "Please enter 4 INTEGERS: \n";
//	int a{};
//	int b{};
//	int c{};
//	int d{};
//	cin >> a;
//	cin >> b;
//	cin >> c;
//	cin >> d;
//	int sum{ a + b + c + d };
//	double average{ sum / 4.0 };
//	cout << "The sum of your numbers are: " << sum << " and the mean value is " << average;
//	return 0;
//}

/*
Please enter 4 INTEGERS:
1
2
3
4
The sum of your numbers are : 10 and the mean value is 2.5

Please enter 4 INTEGERS:
24
3
7
15
The sum of your numbers are: 49 and the mean value is 12.25

12
23
34
45
The sum of your numbers are: 114 and the mean value is 28.5

Please enter 4 INTEGERS:
95
2145
34
1
The sum of your numbers are: 2275 and the mean value is 568.75
*/

//Sums all the numbers from 1->Your Value
int main()
{
	cout << "Enter a positive integer: ";
	int value{};
	cin >> value;
	int sum{ 0 };

	for (int add{ 1 }; add <= value; add += 1)
	{
		sum += add;
	}

	cout <<"The sum from 1 to your number is "<< sum;

	return 0;
}