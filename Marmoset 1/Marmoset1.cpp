#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <cstdlib> 
#include <cstring> 
#include <fstream>
#include <iomanip>
#include <algorithm>

using namespace std;

//#1
//int main()
//{
//    cout << "Hello World!\n";
//}

//#2
//int main()
//{
//	cout << "Enter an integer to be stored: ";
//	int num{};
//	cin >> num;
//	cout << "The number that was stored was: " << num;
//
//	return 0;
//}

//#3
//int main()
//{
//	double velocity{};
//	double angle{};
//	double height{};
//	cout << "enter the launch velocity [m/s] : ";
//	cin >> velocity;
//	cout << "enter the launch angle [degrees] : ";
//	cin >> angle;
//	cout << "enter the change in elevation from launch to landing [m] : ";
//	cin >> height;
//
//	angle = angle * (3.14159265358979) / 180.0;
//	double time1{};
//	double time2{};
//	double vfinal{};
//
//	vfinal = sqrt(pow(velocity, 2.0) - 2.0 * 9.81 * height);
//
//	time1 = (-10.0 / 981.0) * (sqrt(2.0) * sqrt(50.0 * pow(velocity, 2.0) * pow(sin(angle), 2.0) - 981.0 * height) - 10.0 * vfinal * sin(angle));
//	time2 = (10.0 / 981.0) * (sqrt(2.0) * sqrt(50.0 * pow(velocity, 2.0) * pow(sin(angle), 2.0) - 981.0 * height) + 10.0 * vfinal * sin(angle));
//	cout << "the first calculated time of flight is: " << time1 << "seconds.\n";
//	cout << "the second calculated time of flight is: " << time2 << "seconds.\n";
//
//	return 0;
//}

//#4
//int main()
//{
//	double david{};
//	double daughter{};
//	double distance{};
//
//	cout << "Please enter David's daughter's weight (in kg): ";
//	cin >> daughter;
//	cout << "Please enter David's weight (in kg): ";
//	cin >> david;
//
//	distance = daughter * 1.6 / david;
//
//	cout << "David should sit at a distance of " << distance << " meters from the fulcrum.\n";
//
//	return 0;
//}

//#5
//int main()
//{
//	int number{};
//	cout << "Enter a positive integer: ";
//	cin >> number;
//
//	int remainder{};
//
//	remainder = number % 2;
//
//	if (remainder == 0)
//	{
//		cout << "The number that you entered is even.";
//	}
//	else
//	{
//		cout << "The number that you entered is odd. ";
//	}
//
//	return 0;
//
//}

//#6
//int main()
//{
//	int num1{};
//	int num2{};
//	cout << "Enter two integers: ";
//	cin >> num1;
//	cin >> num2;
//
//	if (num1 > num2)
//		cout << "The first number is larger. ";
//	else if (num2 > num1)
//		cout << "The second number is larger. ";
//	else
//		cout << "The two numbers are equal.";
//
//	return 0;
//}

//#7
//int main()
//{
//	double x{};
//	double y{};
//	cout << "Enter the x,y coordinates for a point: ";
//	cin >> x;
//	cin >> y;
//
//	if (x > y)
//		cout << "The point is below the line y=x";
//	else if (y > x)
//		cout << "The point is above the line y=x";
//	else
//		cout << "The point is on the line y=x";
//
//	return 0;
//}

//#8
//int main()
//{
//	int num{1};
//
//	while (num <= 25)
//	{
//		cout << num <<'\n';
//		num += 1;
//	}
//
//	return 0;
//}

//#9
//int main()
//{
//	int num{};
//	cout << "Enter a positive integer: ";
//	cin >> num;
//	for (int iii = 1; iii <= num; iii += 1)
//		cout << iii << '\n';
//
//	return 0;
//}

//#10
//int main()
//{
//	int num1{};
//	int num2{};
//	int sum{};
//	double remainder{};
//	cout << "This program will add two odd positive integers: \n";
//
//	do
//	{
//		cout << "Enter the first odd positive integer: ";
//		cin >> num1;
//		remainder = num1 % 2;
//	} while (remainder == 0 || num1 < 0);
//
//	do
//	{
//		cout << "Enter the second odd positive integer: ";
//		cin >> num2;
//		remainder = num2 % 2;
//	} while (remainder == 0 || num2 < 0);
//
//	sum = num1 + num2;
//	cout << "The sum of your two integers are: " << sum;
//
//	return 0;
//}

//#11
//int main()
//{
//	int num1{};
//	int num2{};
//	cout << "Counting Up \n";
//	cout << "Enter the starting integer: ";
//	cin >> num1;
//	cout << "Enter the ending integer: ";
//	cin >> num2;
//
//	for (int count{ num1 }; count <= num2; count += 1)
//	{
//		cout << count << " ";
//	}
//}

//#12
//int main()
//{
//	ifstream hello{ "Hello World!.txt" };
//
//	string plsWork{};
//
//	while (hello)
//	{
//		hello >> plsWork;
//		cout << plsWork;
//	}
//	return 0;
//}

//#13
//int main()
//{
//	ifstream targets{ "Targets.txt" };
//
//	string location{};
//	double x{};
//	double y{};
//	double dist{};
//	double angle{};
//
//	while (targets >> location >> x >> y)
//	{
//		dist = sqrt(pow(x, 2.0) + pow(y, 2.0));
//		angle = atan(y / x);
//		angle = angle / (3.14159265358979323846264338327950) * 180.0;
//		cout << location << " " << dist << " kilometres " << angle << " degrees\n";
//	}
//
//	return 0;
//}

//#14
//int main()
//{
//	ifstream direct{ "drone_directions.txt" };
//	double x{};
//	double y{};
//	double size{};
//	double angleTemp{};
//	double angle{};
//	double tempX{};
//	double tempY{};
//
//	while (direct >> size >> angleTemp)
//
//	{
//		angleTemp = angleTemp * (3.14159265358979323846264338) / 180.0;
//		angle += angleTemp;
//		tempX = size * cos(angle);
//		tempY = size * sin(angle);
//		x += tempX;
//		y += tempY;
//		cout << "(" << x << ", " << y << ")\n";
//	}
//
//	return 0;
//}

//#15 Medal Count
//int main()
//{
//	ifstream medals{ "medal_count.txt" };
//	int bronze{};
//	int silver{};
//	int gold{};
//	int sum{};
//	int highest{};
//	string countryFirst{};
//	string country{};
//	string B{ "B" };
//	string S{ "S" };
//	string G{ "G" };
//
//	while (medals >> country >> bronze >> silver >> gold)
//	{
//		cout << setw(22) << country << " ";
//		for (int count{}; count < bronze; ++count)
//		{
//			cout << B;
//		}
//
//		for (int count{}; count < silver; ++count)
//		{
//			cout << S;
//		}
//
//		for (int count{}; count < gold; ++count)
//		{
//			cout << G;
//		}
//		cout << '\n';
//
//		sum = bronze + silver + gold;
//		
//		if (sum > highest)
//		{
//			highest = sum;
//			countryFirst = country;
//		}
//	}
//
//	cout << "The country with the highest number of medals is " << countryFirst << " with " << highest << " medals \n";
//
//	return 0;
//}
		
//Time of Flight
//double timeOfFlight(double initialVelocity)
//{
//	double finalVelocity{};
//	double time{};
//	const double GRAV{ -9.80665 };
//
//	finalVelocity = -(initialVelocity);
//
//	time = (finalVelocity - initialVelocity) / GRAV;
//
//	return time;
//}
//
//int main()
//{
//	double initialVelocity{ };
//
//	do
//	{
//		cout << "Enter the intitial velocity (m/s): ";
//		cin >> initialVelocity;
//	} while (initialVelocity <= 0);
//
//	cout << "The projectile will return to the ground in " << timeOfFlight(initialVelocity) << " seconds.\n";
//
//	return 0;
//}

//Star Pyramid
//void outputSpaces(int quantitySpaces)
//{
//	for (int iii{}; iii < quantitySpaces; ++iii)
//	{
//		cout << " ";
//	}
//}
//
//void outputStars(int quantityStars)
//{
//	for (int iii{}; iii < quantityStars; ++iii)
//	{
//		cout << "*";
//	}
//}
//
//int main()
//{
//	int pyramidSize{};
//
//	cout << "Enter the height of the pyramid: ";
//	cin >> pyramidSize;
//
//	for (int pyramidLevel{ pyramidSize }; pyramidLevel > 0; --pyramidLevel)
//	{
//		outputSpaces(pyramidLevel - 1);
//		outputStars(2 * pyramidSize - 2 * pyramidLevel + 1);
//		cout << '\n';
//	}
//
//	return 0;
//}

//int main()
//{
//	long long factorial{};
//	long long total{ 1 };
//	cout << "Enter a number to take the factorial of: ";
//	cin >> factorial;
//	for (long long count{ factorial }; count > 0; --count)
//	{
//		total *= count;
//	}
//	cout << "That number factorialized is: " << total;
//
//	return 0;
//}

//Secret Message 
int main()
{
	ifstream message{"secret_message.txt"};
	const int MAX_SIZE{100};
	int order[MAX_SIZE]{};
	string word[MAX_SIZE]{};
	int currentSize{};

	while (message>>word[currentSize]>>order[currentSize])
	{
		++currentSize;
	}

	for (int iii{} ; iii < currentSize ; ++iii)
	{
		if (order[iii] > order[iii+1])
		{
			swap(order[iii],order[iii+1]);
			swap(word[iii],word[iii+1]);
		}
	}

	for (int iii{} ; iii < currentSize ; ++iii)
	{
		cout<<word[iii] <<" ";
	}

	return 0;
}
