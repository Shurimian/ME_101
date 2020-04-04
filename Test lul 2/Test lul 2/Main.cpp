#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <string>
#include <iomanip>__msvc_all_public_headers.hpp
#include <fstream>__msvc_all_public_headers.hpp
#include <iterator>
#include <algorithm>__msvc_all_public_headers.hpp

using namespace std;


//Basic Calculator
//int main()
//{
//	cout << "Enter two integers: ";
//	int x{};
//	int y{};
//	cin >> x;
//	cin >> y;
//	char operation{};
//	int output{};
//
//	cout << "Now enter an operation you would like to perform on these integers. Input +, -, *, /, or % ";
//	cin >> operation;
//
//	switch (operation)
//	{
//	case '+':
//		output = x + y;
//		break;
//	case '-':
//		output = x - y;
//		break;
//	case '*':
//		output = x * y;
//		break;
//	case '/':
//		output = x / y;
//		break;
//	case '%':
//		output = x % y;
//		break;
//	default:
//		cout << "That is not a valid input";
//		break;
//	}
//
//	cout << x << operation << y << " = " << output;
//
//	return 0;
//}

//Printing Alphabet
//int main()
//{
//	int letter{ 97 };
//	char cletter{ 'a' };
//
//	while (letter < 122)
//	{
//		cout << static_cast<char>(letter) << " " << letter << '\n';
//		++letter;
//	} 
//}

//Printing even numbers 0-20
//int main()
//{
//	for (int iii{}; iii <= 20; iii += 2)
//	{
//		cout << iii << '\n';
//	}
//}

//# Testing multiple inputs
//int main()
//{
//	cout << "Enter x and y: ";
//	double x{}, y{};
//	cin >> x;
//	cin >> y;
//	cout << x << " " << y;
//	return 0;
//}

//Array Testing
//int main()
//{
//	int array[]{ 4, 6, 7, 3, 8, 2, 1, 9, 5 };
//
//	for (int iii{ 0 }; iii < 9; ++iii)
//		cout << array[iii] << '\n';
//
//	return 0;
//}

//Calculate Kinematic Equations
//int main()
//{
//	string var1{};
//	string var2{};
//	string var3{};
//	string solve{};
//	double answer{};
//	double angle{};
//	double velF{};
//	double velI{};
//	double accel{};
//	double disp{};
//	double time{};
//
//	while (true)
//	{
//		cout << "What variable are you trying to solve for (Vf, Vi, t, a, d): ";
//		cin >> solve;
//
//		if (solve != "Vf" && solve != "Vi" && solve != "t" && solve != "a" && solve != "d")
//		{
//			cout << "Invalid input. Please try again. \n";
//		}
//		else
//			break;
//	}
//
//	while (true)
//	{
//		cout << "What 3 variables will you provide? (Vf, Vi, t, a, d) ";
//		cin >> var1 >> var2 >> var3;
//
//		if (solve == var1 || solve == var2 || solve == var3)
//			cout << "Variable already provided. Choose again. \n";
//		else if (var1 == var2 || var2 == var3 || var3 == var1)
//			cout << "Cannot provide 2 of the same type. Choose again. \n";
//		else
//			break;
//	}
//
//	if (solve == "d")
//	{
//		cout << "Enter a value for time (s): ";
//		cin >> time;
//
//		if (var1 == "a" || var2 == "a" || var3 == "a")
//		{
//			cout << "Enter the value of acceleration (m/s^2): ";
//			cin >> accel;
//
//			if (var1 == "Vf" || var2 == "Vf" || var3 == "Vf")
//			{
//				cout << "Enter the final velocity (m/s): ";
//				cin >> velF;
//				answer = velF * time - accel * pow(time, 2.0) * (0.5);
//			}
//			else
//			{
//				cout << "Enter the initial velocity (m/s): ";
//				cin >> velI;
//				answer = velI * time + accel * pow(time, 2.0) * (0.5);
//			}
//		}
//		else
//		{
//			cout << "Enter the final velocity (m/s): ";
//			cin >> velF;
//			cout << "Enter the initial velocity (m/s): ";
//			cin >> velI;
//			answer = ((velI + velF) / 2.0) * time;
//		}
//
//		cout << "Your displacement is " << answer << " m.\n";
//	}
//
//	if (solve == "Vf")
//	{
//		cout << "Enter a value for acceleration (s): ";
//		cin >> accel;
//		cout << "Enter a value for initial velocity (m/s): ";
//		cin >> velI;
//
//		if (var1 == "t" || var2 == "t" || var3 == "t")
//		{
//			cout << "Enter the value for time (s): ";
//			cin >> time;
//			answer = velI + accel * time;
//		}
//		else
//		{
//			cout << "Enter the displacement (m): ";
//			cin >> disp;
//			answer = sqrt((pow(velI, 2.0) + 2 * accel * disp));
//		}
//
//		cout << "Your final velocity is " << answer << " m/s.\n";
//	}
//
//	if (solve == "Vi")
//	{
//
//		if (var1 == "t" || var2 == "t" || var3 == "t")
//		{
//			cout << "Enter the value for time (s): ";
//			cin >> time;
//		}
//		else
//		{
//			cout << "Enter the final velocity: ";
//			cin >> velF;
//		}
//
//		cout << "Your initial velocity is " << answer << " m/s.\n";
//	}
//
//	return 0;
//}

//Atomic Radius Question A2 Q1/A5 Q3
//double volSC(double radius)
//{
//	return pow((2.0 * radius), 3.0);
//}
//
//double volBCC(double radius)
//{
//	return pow((4.0 * radius / sqrt(3.0)), 3.0);
//}
//
//double volFCC(double radius)
//{
//	return pow((4.0 * radius / sqrt(2.0)), 3.0);
//}
//
//int main()
//{
//	string structure{ "" };
//
//	while (true)
//	{
//		cout << "Enter a cell structure (SC, BCC, FCC): ";
//		getline(cin, structure);
//
//		{
//			if (structure != "SC" && structure != "BCC" && structure != "FCC")
//			{
//				cout << "Not a valid input. Please try again. \n";
//			}
//			else
//				break;
//		}
//	}
//
//	double rad{};
//
//	while (true)
//	{
//		cout << "Enter an atomic radius in Angstroms: ";
//		cin >> rad;
//		if (cin.fail() || rad < 0)
//		{
//			cin.clear();
//			cin.ignore(32767, '\n');
//			cout << "Not a valid input. Please try again. \n";
//		}
//		else
//			break;
//	}
//
//	double vol{};
//
//	if (structure == "SC")
//		vol = volSC(rad);
//	else if (structure == "BCC")
//		vol = volBCC(rad);
//	else
//		vol = volFCC(rad);
//
//	cout << "The volume of your structure is: " << vol << '\n';
//
//	return 0;
//}

//Calculate Age A2 Q3
//int main()
//{
//	cout << "Enter your birthday (Year, Month, Day): ";
//	int bday[3]{};
//	cin >> bday[0] >> bday[1] >> bday[2];
//	cout << "Enter the current day (same format): ";
//	int today[3]{};
//	cin >> today[0] >> today[1] >> today[2];
//	int age{ today[0] - bday[0] };
//
//	if (today[1] < bday[1])
//	{
//		age -= 1;
//	}
//	else if (today[1] == bday[1])
//	{
//		if (today[2] < bday[2])
//			age -= 1;
//	}
//
//	cout << "Age: " << age;
//
//	return 0;
//}

//Restaurant Bill
//int main()
//{
//	double subtotal{};
//
//	while (true)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
//	{
//		cout << "What is the subtotal: ";
//		cin >> subtotal;
//
//		if (cin.fail())
//		{
//			cin.clear();
//			cin.ignore(32767, '\n');
//		}
//		else
//			break;
//	}
//
//	double tipPercent{};
//
//	while (true)
//	{
//		cout << "What is the tip percent between 0-100: ";
//		cin >> tipPercent;
//
//		if (cin.fail())
//		{
//			cin.clear();
//			cin.ignore(32767, '\n');
//		}
//		else if (tipPercent < 0 || tipPercent>100)
//			cout << "Invalid input. Please try again.";
//		else
//			break;
//	}
//
//	double tax{};
//
//	tax = subtotal * 0.13;
//	tipPercent = tipPercent / 100.0;
//	tipPercent = (subtotal + tax) * tipPercent;
//
//	double total{};
//
//	total = (subtotal + tax + tipPercent);
//
//	cout << "Tax " << tax << '\n'
//		<< "Tip " << tipPercent << '\n'
//		<< "Total " << total;
//
//	return 0;
//}

//Days in a Month
//int main()
//{
//	int year{};
//	int month{};
//	cout << "Enter year and month: ";
//	cin >> year >> month;
//
//	while (true)
//	{
//		if (

//Warm Up
//int main()
//{
//	cout << "Enter an integer: ";
//	int num{};
//	cin >> num;
//	int remainder{};
//	remainder = num % 2;
//	if (remainder == 0)
//		cout << "Your number is even. ";
//	else
//		cout << "Your number is odd. ";
//
//	return 0;
//}

//Luggage Allowance
//int main()
//{
//	double weight{};
//	string unit{};
//	string cont{};
//
//	while (true)
//	{
//		cout << "Enter your luggage weight in kg or lbs: ";
//		cin >> weight >> unit;
//		if (cin.fail())
//		{
//			cin.clear();
//			cin.ignore(32767, '\n');
//			cout << "Not a valid input. Enter a valid weight: ";
//			cin >> weight;
//		}
//
//		else
//		{
//			while (true)
//			{
//				if (unit != "kg" && unit != "lbs")
//				{
//					cout << "Not a valid input. Enter a valid unit: ";
//					cin >> unit;
//				}
//				else
//					break;
//
//			}
//
//			if (unit == "lbs")
//			{
//				weight /= 2.20462;
//			}
//			if (weight > 23.0)
//				cout << "Your luggage is too heavy. Please enter a lighter luggage: \n";
//		}
//		cout << "Your luggage weighs " << weight << "kg and is within weight. \n";
//	}
//}

//Forces on a Beam
//int main()
//{
//	double force1{};
//	double force2{};
//	double dist1{};
//	double dist2{};
//	double torque1{};
//	double torque2{};
//	const double TOL{ 10.0 };
//	string cont{};
//
//	while (true)
//	{
//		cout << "Enter a force (in Newtons) and the distance (in metres) from the pivot from which it is applied: ";
//		cin >> force1 >> dist1;
//		cout << "Enter a 2nd force (in Newtons and the distance (in metres) from the pivot from which it is applied: ";
//		cin >> force2 >> dist2;
//		torque1 = force1 * (-1.0 * dist1);
//		torque2 = force2 * (dist2);
//
//		if ((fabs(torque1 - torque2)) < TOL)
//		{
//			cout << "Your seesaw is balanced. \n";
//		}
//		else
//		{
//			if (torque1 > torque2)
//				cout << "Your seesaw will tip to the left. \n";
//			else
//				cout << "Your seesaw will tip to the right. \n";
//		}
//
//		cout << "Would you like to enter more? (Yes or No) ";
//		cin >> cont;
//		if (cont == "Yes")
//		{
//		}
//		else
//			break;
//	}
//	cout << "Cy@";
//}

//Florida Vacation Decisions
//double labour(double Age, double ParkVisit, double Days, double Discount)
//{
//	double extraDays{};
//	double points{};
//
//	if (ParkVisit > Days)
//	{
//		extraDays = (ParkVisit - Days);
//
//		if (Age > 10.0)
//		{
//			points = (extraDays * 140 + ((Days - extraDays) * 100)) * Discount;
//		}
//		else if (Age > 3.0 && Age < 9.999)
//		{
//			points = (Days * 100) * Discount;
//		}
//		else
//		{
//			points = (Days * 40);
//		}
//	}
//	else
//	{
//		if (Age > 3.0)
//		{
//			points = (Days * 100) * Discount;
//		}
//		else
//		{
//			points = (Days * 40) * Discount;
//		}
//	}
//	return points;
//}
//
//int main()
//{
//	double age{};
//	double parkVisit{};
//	double days{};
//	double discount{};
//	double cost{};
//
//	while (true)
//	{
//		cout << "Enter your family members age, # of park visits, & days visiting: ";
//		cin >> age >> parkVisit >> days;
//
//		if (days > 4.0)
//		{
//			if (age > 3.0)
//			{
//				discount = 0.75;
//			}
//			else
//				discount = 1.0;
//		}
//
//		cost = { labour(age, parkVisit, days, discount) };
//
//		cout << " Total Points: " << cost << '\n';
//	}
//}

//A3 Q1
//int main()
//{
//	double cost{};
//	int ppl{};
//	double costI{};
//	const double tax{ 1.15 };
//	string cont{ "y" };
//
//	while (cont == "y")
//	{
//		cout << "Please enter the cost of the meal: ";
//		cin >> cost;
//		if (cost <= 0)
//		{
//			do
//			{
//				cout << "Invalid cost. Please enter again: ";
//				cin >> cost;
//			} while (cost <= 0);
//		}
//
//		cout << "Please enter the number of guests: ";
//		cin >> ppl;
//
//		if (ppl <= 0)
//		{
//			do
//			{
//				cout << "Invalid cost. Please enter again: ";
//				cin >> ppl;
//			} while (ppl <= 0);
//		}
//
//		cost *= tax;
//		costI = cost / static_cast<double> (ppl);
//		cout << "Each person should pay $" << fixed << setprecision(2) << costI << '\n';
//		cout << "Would you like to split another bill (y/n)?: ";
//		cin >> cont;
//	}
//	cout << "Goodbye";
//  return 0;
//}

//A3 Q2
//int main()
//{
//	ifstream testTemp{ "December_2019.txt" };
//
//	double high{};
//	double highest{};
//	double low{};
//	double lowest{};
//
//	while (testTemp >> high >> low)
//	{
//
//		if (highest <= high)
//			highest = high;
//		if (lowest >= low)
//			lowest = low;
//
//	}
//	cout << "The highest daily temperature in December is " << highest << '\n';
//	cout << "The lowest daily temperature in December is " << lowest << '\n';
//	return 0;
//}

//A3 Q3
//int main()
//{
//
//	ifstream grades{ "CHE_102_grades.txt" };
//
//	double studentCount{};
//	double high{};
//	double highest{0};
//	double low{};
//	double lowest{100};
//	double bestID{};
//	double worstID{};
//	double studentNum{};
//	double markSum{};
//
//	//Initialize lowest grade as 100 so the first value for low is extracted to lowest.
//
//	while (grades>>studentNum>>high)
//	{
//		++studentCount;
//		markSum += high;
//
//		if (high > highest)
//		{
//			highest = high;
//			bestID = studentNum;
//		}
//		else if (high < highest)
//		{
//			low = high;
//
//			if (low < lowest)
//			{
//				lowest = low;
//				worstID = studentNum;
//			}
//		}
//	}
//
//	cout << "Student with number " << setprecision(8) << bestID << " has the highest mark with a " << highest << " % average. \n";
//	cout << "Student with number " << worstID << " has the lowest mark with a " << lowest << " % average. \n";
//	cout << "The mean of all the students is " << fixed << setprecision(2) << markSum / studentCount << " %";
//	return 0;
//}

//Warm Up
//int main()
//{
//	ifstream me{ "Meee.txt" };
//	string yes{};
//	while (me >> yes)
//	{
//		cout << yes << " ";
//	}
//
//	return 0;
//}

//For Loop Test
//int main()
//{
//	for (int count{ 10 }; count >= 0; --count)
//	{
//		cout << count << '\n';
//	}
//
//	cout << "Blast off!";
//
//	return 0;
//}

//City Count
//int main()
//{
//	ifstream city{ "city.txt" };
//	string name{};
//	long long population{};
//	ofstream bigcity{ "bigcity.txt" };
//
//	while (city >> name >> population)
//	{
//		if (population >= 300000)
//		{
//			bigcity << name << " " << population << '\n';
//		}
//	}
//}

//Average Temperature
//int main()
//{
//	ifstream month{ "February.txt" };
//	double sum{};
//	double temp{};
//	double days{};
//	double average{};
//
//	if (!month)
//	{
//		cout << "File failed to properly open. \n";
//	}
//	else
//	{
//		cout << "File successfully opened. \n";
//	}
//
//	while (month >> temp)
//	{
//		++days;
//		sum += temp;
//	}
//
//	average = sum / days;
//
//	cout << "The average temperature this month is " << average << " degrees.";
//
//	return 0;
//}

//Polar Coordinates Conversion
//int main()
//{
//	string cont{ "y" };
//	double rad{};
//	double angle{};
//	double x{};
//	double y{};
//	const double pi{ 3.14159265358979323846264338327950288 };
//
//	while (cont == "y")
//	{
//		cout << "Enter a radius (m): ";
//		cin >> rad;
//
//		if (rad < 0)
//		{
//			do
//			{
//				cout << "Invalid input. Please try again. \n";
//				cout << "Enter a radius (m): ";
//				cin >> rad;
//			} while (rad < 0);
//		}
//
//		cout << "Enter a angle (degrees): ";
//		cin >> angle;
//		angle = angle * (pi) / 180.0;
//		x = rad * cos(angle);
//		y = rad * sin(angle);
//
//		cout << "Your position in cartesian coordinates are: x = " << x << " y = " << y << " \n";
//		cout << "Would you like to repeat the calculation? (y/n) ";
//		cin >> cont;
//	}
//
//	return 0;
//}

//Prof Count
//int main()
//{
//	ifstream names{ "MMENames.txt" };
//	string prof{};
//	string check{};
//
//	if (!names)
//	{
//		cout << "File failed to open. \n";
//	}
//	else
//	{
//		cout << "File opened successfully. \n";
//	}
//
//	cout << "Enter a persons last name: ";
//	cin >> prof;
//
//	while (names >> check)
//	{
//		if (prof == check)
//		{
//			break;
//		}
//	}
//
//	if (prof == check)
//	{
//		cout << "Your person is a MME professor. ";
//	}
//	else
//	{
//		cout << "Your person is not a MME professor. ";
//	}
//
//	return 0;
//}

//Times Table
//int main()
//{
//	double num{};
//	double times{};
//	string cont{ "y" };
//
//	while (cont == "y")
//	{
//		cout << "Enter a number between 1-15: ";
//		cin >> num;
//
//		if (num < 1 || num > 15)
//		{
//			do
//			{
//				cout << "Invalid input. \n";
//				cout << "PLease enter a number between 1-15: ";
//				cin >> num;
//			} while (num < 1 || num>15);
//		}
//
//		for (int count{ 1 }; count <= 15; ++count)
//		{
//			times = count * num;
//			cout << setw(3) <<times << " \n";
//		}
//
//		cout << "Would you like to continue? (y/n): ";
//		cin >> cont;
//
//		if (cont != "y" && cont != "n")
//		{
//			do
//			{
//				cout << "Invalid input. \n";
//				cout << "Would you like to continue? (y/n): ";
//				cin >> cont;
//			} while (cont != "y" && cont != "n");
//		}
//
//		if (cont == "n")
//		{
//			break;
//		}
//
//	}
//	return 0;
//}

//Phone Bill Calculator
//int main()
//{
//	double minutes{};
//	double cents{};
//	double tax{ 1.15 };
//	double total{};
//
//	cout << "Time to pay for your monthly phone bil! How many minutes did you use this month? ";
//
//	cin >> minutes;
//
//	if (minutes < 100)
//	{
//		cents = 0.15;
//		total = tax * (cents * minutes);
//	}
//	else if (minutes >= 100 && minutes <= 250)
//	{
//		cents = 0.12;
//		total = tax * (cents * minutes);
//	}
//	else if (minutes > 250)
//	{
//		cents = 0.10;
//		total = tax * (cents * minutes);
//	}
//
//	cout << "Your total phone bill this month is " << total << "$";
//
//	return 0;
//}

//Solving Quadratic Equations
//int main()
//{
//
//	double a{};
//	double b{};
//	double c{};
//	double sol1{};
//	double sol2{};
//	double checksol{};
//	double discriminant{};
//	double imaginary{};
//	double imsol1{};
//	double imsol2{};
//	string cont{ "y" };
//	
//	while (cont == "y")
//	{
//
//		cout << "Quadratic equations come in the form of ax^2+bx+c. \n";
//		cout << "Enter a value for a, b, and c: ";
//		cin >> a >> b >> c;
//
//		while (a == 0)
//		{
//			cout << "Invalid. That is not a quadratic equation. Please enter another value for a: ";
//			cin >> a;
//		}
//
//		discriminant = pow(b, 2.0) - 4.0 * a * c;
//
//		if (discriminant >= 0)
//		{
//			sol1 = ((-b + sqrt(discriminant)) / (2.0 * a));
//			sol2 = ((-b - sqrt(discriminant)) / (2.0 * a));
//
//			if (sol1 == sol2)
//			{
//				cout << "Your quadratic equation has one root. That root is " << sol1 << '\n';
//			}
//			else
//			{
//				cout << "Your quadratic equation has two roots. Those roots are " << sol1 << " and " << sol2 << '\n';
//			}
//		}
//		else
//		{
//			imaginary = fabs(discriminant);
//			sol1 = -b / 2.0 * a;
//			sol2 = -b / 2.0 * a;
//			imsol1 = (-sqrt(imaginary)) / (2.0 * a);
//			imsol1 = sqrt(imaginary) / (2.0 * a);
//
//			cout << "Your quadratic equation has 2 imaginary roots. Those roots are " << sol1 << "+" << imsol1 << "i "
//				<< "and " << sol2 << " " << imsol2 << "i \n";
//		}
//
//		cout << "Would you like to enter another equation? (y/n)";
//		cin >> cont;
//
//	}
//	return 0;
//}

//Compass Directions
//int main()
//{
//	double angle{};
//	cout << "Enter an angle (in degrees): ";
//	cin >> angle;
//
//	while (angle > 360)
//	{
//		angle -= 360.0;
//	}
//
//	if (angle == 0 || angle == 360)
//	{
//		cout << "Your direction is East. ";
//	}
//	else if (angle == 90)
//	{
//		cout << "Your direction is North. ";
//	}
//	else if (angle == 180)
//	{
//		cout << "Your direction is West. ";
//	}
//	else if (angle == 270)
//	{
//		cout << "Your direction is South. ";
//	}
//	else if (angle > 0 && angle < 90)
//	{
//		cout << "Your direction is North East. ";
//	}
//	else if (angle > 90 && angle < 180)
//	{
//		cout << "Your direction is North West. ";
//	}
//	else if (angle > 180 && angle < 270)
//	{
//		cout << "Your direction is South West. ";
//	}
//	else if (angle > 270 && angle < 360)
//	{
//		cout << "Your direction is South East. ";
//	}
//
//	return 0;
//}

//Robot C A4 Q1 (Note: Syntax only correct for Robot C)

//task main()
//{
//	while (!getButtonPress(buttonEnter))
//	{
//	}
//	while (getButtonPress(buttonEnter))
//	{
//	}
//
//	SensorType[S1] = sensorEV3_Ultrasonic;
//	SensorType[S2] = sensorEV3_Touch;
//	const int distI = SensorValue[S1];
//	motor[motorA] = motor[motorD] = 30;
//
//	while (SensorValue[S2]==0) //While distance from ultrasonic sensor is > 50cm
//	{
//		wait1M(500);
//		eraseDisplay();
//		displayString(4, "Distance Travelled: %d", SensorValue[S1]); //Display on line 5
//
//		if (SensorValue[S2] == 1)
//		{
//			motor[motorA] = motor[motorD] = 0;
//		}
//	}
//
//	wait1M(2000);
//
//	while (SensorValue[S2] < distI)
//	{
//		motor[motorA] = motor[motorD] = -30;
//	}
//
//	wait1M(1000);
//
//}

//task main()
//{
//	while (!getButtonPress(buttonAny))
//	{
//	}
//	while (getButtonPress(buttonAny))
//	{
//	}
//
//	SensorType[S1] = sensorEV3_Ultraonic;
//	SensorType[S2] = sensorEV3_Touch;
//
//	nMotorEncoder[motorA] = 0;
//	ClearTimer(T1);
//	int initialD = SensorValue[S1];
//
//	while (sensorEV3_Touch == 0)
//	{
//		motor[motorA] = motor[motorD] = 30;
//	}
//
//	motor[motorA] = motor[motorD] = 0;
//
//	float wheelRad = nMotorEncoder[motorA] / (PI * initialD);
//	float speed = (initialD / 100.0) / (time1[T1] / 1000.0);
//
//	displayString(2, "Radius of wheel: %fcm", wheelRad);
//	displayString(3, "Speed: %fm/s", speed);
//	displayString(4, "Enter any button to exit.");
//
//	while (!getButtonPress(buttonAny))
//	{
//	}
//	while (getButtonPress(buttonAny))
//	{
//	}
//
//	return 0;
//}

//Water Taxlo A4 Q2
//int main()
//{
//	ifstream taxi{ "taxi.txt" };
//	double costCul{};
//	double distCul{};
//	double dist{};
//	double cost{};
//	const double tripCost{ 12 };
//	const double distCost{ 2.3 };
//	bool ret{ 0 };
//	int trips{};
//	int count{};
//
//	while (taxi >> ret >> trips) //Scan for Return Trip & # of Trips
//	{
//		double costT{};
//		double distT{};
//		double xTail{};
//		double yTail{};
//		double xNow{};
//		double yNow{};
//		double xHead{};
//		double yHead{};
//
//		++count;
//		for (int count{}; count < trips; ++count) //Uses # of Trips to properly read correct # of coordinate points
//		{
//			taxi >> xHead >> yHead;
//			xNow = xHead - xTail;
//			yNow = yHead - yTail;
//			dist = sqrt(pow(xNow, 2.0) + pow(yNow, 2.0));
//			costT += dist * distCost;
//			distT += dist;
//			xTail = xHead;
//			yTail = yHead;
//
//			if (ret == 1)//Calculates Return Distance IF they return
//			{
//				if (count == trips - 1)
//				{
//					dist = sqrt(pow(xHead, 2.0) + pow(yHead, 2.0));
//					distT += dist;
//					costT += dist * distCost;
//				}
//
//			}
//		}
//		
//		costT += tripCost * trips;
//		costCul += costT;
//		distCul += distT;
//
//		if (count <= 5 || ((count % 5)==0 && (count%10)!=0))
//		{
//			cout << setw(5) << "Trip" << setw(7) << "Return" << setw(6) << "Stops" << setw(10) << "Distance"
//				<< setw(8) << "Cost" << setw(12) << "Cumulative " << setw(12) << "Cumulative \n";
//			cout << setw(47) << "Distance" << setw(13) << "Cost \n";
//			cout << setw(5) << count << setw(7) << ret << setw(6) << trips << setw(9)
//				<< fixed << setprecision(2) << distT << setw(9) << costT << setw(11) << costCul << setw(11) << distCul << " \n";
//			cout << '\n';
//		}
//	}
//
//	return 0;
//}

//Single Student Grade Trends
//int main()
//{
//	ifstream grades{ "oneStudent.txt" };
//	double current{};
//	double old{};
//
//	while (grades >> current)
//	{
//		if (current > old)
//		{
//			cout << "Grade has increased. \n";
//		}
//		else if (old > current)
//		{
//			cout << "Grade has decreased. \n";
//		}
//		else
//		{
//			cout << "Grade remained the same. \n";
//		}
//
//		old = current;
//	}
//}

//More student grades
//int main()
//{
//	ifstream grades{ "allStudent.txt" };
//	double student{};
//	double old{100};
//	double count{ 1 };
//	double perfect{};
//
//	while (grades)
//	{
//		double improve{};
//
//		for (int iii{}; iii <= 5; ++iii)
//		{
//			grades >> student;
//			if (student > old)
//			{
//				++improve;
//			}
//			else if (student == 10)
//			{
//				++perfect;
//			}
//			old = student;
//			cout << "Student #" << count << " has improved their grades " << improve << " times. \n";
//		}
//		cout << "Student #" << count << " has improved their grades " << improve << " times. \n";
//		++count;
//	}
//	cout << "There were " << perfect << " perfect scores.";
//}

//Arrays & Bubble Sorting
//int main()
//{
//	int array[9]{ 6,3,2,9,7,1,5,4,8 };
//
//	for (int iii{ 0 }; iii < 9; ++iii)
//	{
//		for (int ii{ 0 }; ii < 8; ++ii)
//		{
//			if (array[ii] > array[ii + 1])
//			{
//				swap(array[ii], array[ii + 1]);
//			}
//		}
//	}
//
//	for (int i{ 0 }; i < 9; ++i)
//	{
//		cout << array[i] << '\n';
//	}
//	return 0;
//}

//Test Array String
//int main()
//{
//	string array[]{ "Yes", "Try", "Hello", " qif", "qihq" };
//	int fine{ static_cast<int>(size(array)) };
//	cout << fine;
//	cout << array[0];
//	cout << array[1];
//
//	return 0;
//}

//Radians To Degrees
//double angleDeg(double convert)
//{
//	return 	(convert * 180) / 3.14159265358979323846264338;;
//}
//int main()
//{
//	double angleRad{};
//
//	cout << "Enter a angle in radians: ";
//	cin >> angleRad;
//	cout << "Your angle in degrees is " << angleDeg(angleRad);
//
//	return 0;
//}

//Inch To Cm
//double cm(double convert)
//{
//	return convert * 2.54;
//}
//int main()
//{
//	double inches{};
//
//	cout << "Enter a distance in inches: ";
//
//	cin >> inches;
//	
//	if (inches < 0)
//	{
//		do
//		{
//			cout << "Invalid input. Enter a positive distance: ";
//			cin >> inches;
//		} while (inches < 0);
//	}
//	cout << "Your distance in cm is " << cm(inches);
//
//	return 0;
//}

//Minutes and seconds
//double times(double min, double sec)
//{
//	return (sec / 60.0);
//}
//int main()
//{
//	int minutes{};
//	double seconds{};
//	string cont{ "y" };
//
//	while (cont == "y")
//	{
//		cout << "enter a time in minutes and seconds (ex. 3 54): ";
//		cin >> minutes >> seconds;
//
//		if (minutes <= 0 || seconds <= 0)
//		{
//			do
//			{
//				cout << "Invalid input. Please enter positive times: ";
//				cin >> minutes >> seconds;
//			} while (minutes <= 0 || seconds <= 0);
//		}
//
//		cout << "Your time in minutes is (" << minutes << " + " << times(minutes, seconds) << ") minutes. \n";
//		cout << "Would you like to do another conversion? (y/n): ";
//		cin >> cont;
//	}
//	cout << "Aight Cya";
//
//	return 0;
//}

//Even or Odd w Functions
//string evenodd(int num)
//{
//	string check{};
//
//	if (num % 2 == 0)
//	{
//		return "even";
//	}
//	else
//	{
//		return "odd";
//	}
//}
//
//int main()
//{
//	int number{};
//	cout << "Input a integer: ";
//	cin >> number;
//	cout << "Your number is " << evenodd(number);
//	return 0;
//}

//Matrix Practice
//int main()
//{
//	int row{};
//	int column{};
//	cout << "Enter a row size & column size for your matrix: ";
//	cin >> row >> column;
//	int array[row][column];
//	cout << "Enter the values for your matrix: ";
//	for (int rowIndex{}; rowIndex < row; ++rowIndex)
//	{
//		for (int columnIndex{}; columnIndex < column; ++columnIndex)
//		{
//			cin >> array[rowIndex][columnIndex];
//		}
//	}
//	for (int rowIndex{}; rowIndex < row; ++rowIndex)
//	{
//		for (int columnIndex{}; columnIndex < column; ++columnIndex)
//		{
//			cout << array[rowIndex][columnIndex] << " ";
//		}
//
//		endl;
//	}
//
//	return 0;
//}

//World Cups
//bool cup(int year)
//{
//	if (year == 1930 || year == 1934 || year == 1938 || (year - 1950) % 4 == 0)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//int main()
//{
//	int year{};
//	cout << "Enter a year: ";
//	cin >> year;
//
//	if (cup(year) == true)
//	{
//		if (year > 2020)
//		{
//			cout << "There will be a world cup that year.";
//		}
//		else
//		{
//			cout << "There was a world cup that year. ";
//		}
//	}
//	else
//	{
//		cout << "There was no world cup that year.";
//	}
//
//	return 0;
//}

//Polygon Vertice Location
//double* pntrx{};
//double* pntry{};
//
//double vertice(double verticeCount, double angle, double rad)
//{
//	double xVertice{ rad * cos(verticeCount * angle) };
//	double yVertice{ rad * sin(verticeCount * angle) };
//	pntrx = &xVertice;
//	pntry = &yVertice;
//	return 0;
//}
//int main()
//{
//	double x{};
//	double y{};
//	double sides{};
//	double rad{};
//	double angle{};
//
//	cout << "PLease enter a coordinate to be the centre point of your polygon (x,y): ";
//	cin >> x >> y;
//	cout << "Please enter the radius of your polygon (m): ";
//	cin >> rad;
//	cout << "Please enter the # of sides your polygon has: ";
//	cin >> sides;
//	angle = (2 * 3.14159265358979323846264338327) / sides;
//
//	cout << "The vertices of your polygon are: \n";
//
//	for (int iii{}; iii < sides; ++iii)
//	{
//		//Call function to return coordinates of vertice 
//		vertice(iii, angle, rad);
//		cout << fixed << setprecision(2) << x + *pntrx << "," << y + *pntry << '\n';
//	}
//
//	return 0;
//}

//Roundabout Incidents
//Must Read location & # of Incidents
//Function that returns # of stars to output bvased on incident #
//Outputs to a file called graph.txt bar graph the name and stars PER 10 incidents rounded to nearest 10
//Oututs total incidents & roundabout with most incidents
//int star(int starNum)
//{
//	int starCount{};
//	int starRound{};
//	starCount = starNum % 10;
//	starRound = starNum / 10;
//
//	if (starCount > 5)
//	{
//		starRound += 1;
//	}
//	else if (starCount == 5)
//	{
//		if (starRound % 2 != 0)
//		{
//			starRound += 1;
//		}
//	}
//
//	return starRound;
//}
//int main()
//{
//	ifstream round{ "round.txt" };
//	ofstream graph{ "graph.txt" };
//	int accidentSum{};
//	int accident{};
//	int worstAccident{};
//	int starCount{};
//	string location{};
//	string worstLocation{};
//
//	while (round >> location >> accident)
//	{
//		cout << location << " " << accident << '\n';
//		graph << location << " " << accident << '\n';
//		starCount = star(accident);
//
//		for (int iii{}; iii < starCount; ++iii)
//		{
//			graph << "*";
//			cout << "*";
//		}
//		cout << '\n';
//		graph << '\n';
//		if (accident > worstAccident)
//		{
//			worstLocation = location;
//			worstAccident = accident;
//		}
//		accidentSum += accident;
//	}
//
//	cout << "Total incident count is: " << accidentSum << '\n';
//	cout << "The location with the most # of incidents is: " << worstLocation << " with " << worstAccident << " accidents";
//
//	graph << "Total incident count is: " << accidentSum << '\n';
//	graph << "The location with the most # of incidents is: " << worstLocation << " with " << worstAccident << " accidents";
//	return 0;
//}
		
//atan (opp/adj)

//receive time as integer and return as 12:00

//#include <iostream>
//#include <cmath>
//#include <cstdlib>
//#include <fstream>
//#include <iomanip>
//
//using namespace std;
//
//int time(int HHMM)
//{
//    return HHMM / 100 * 60 + HHMM % 100;
//}
//
//double dist(double X, double Y)
//{
//    return sqrt(pow(X, 2.0) + pow(Y, 2.0));
//}
//
//double deg(double X, double Y)
//{
//    double angle = 0;
//
//    if (X <= 0)
//    {
//        if (Y < 0)
//        {
//            angle = fabs(atan(Y / X)) - M_PI;
//        }
//        if (Y >= 0)
//        {
//            angle = M_PI - fabs(atan(Y / X));
//        }
//    }
//    else if (X > 0)
//    {
//        if (Y < 0)
//        {
//            angle = -fabs(atan(Y / X));
//        }
//        if (Y >= 0)
//        {
//            angle = fabs(atan(Y / X));
//        }
//    }
//
//    return angle * 180 / M_PI;
//}
//
//int main()
//{
//    int HHMM = 0;
//    double X = 0;
//    double Y = 0;
//    double distance = 0;
//    double degrees = 0;
//    double oldtime = 0;
//    double newtime = 0;
//    double shorttime = 10000000000;
//
//    ifstream fin("wascally_wabbits.txt");
//    if (!fin)
//    {
//        cout << "No file" << endl;
//    }
//
//    ofstream fout("results.txt");
//
//
//    while (fin >> HHMM >> X >> Y)
//    {
//
//        fout << "Distance: " << setw(7) << dist(X, Y);
//        fout << "  Angle: " << setw(9) << deg(X, Y) << endl;
//
//        oldtime = newtime;
//        newtime = time(HHMM);
//
//        if ((newtime - oldtime) < shorttime)
//        {
//            shorttime = newtime - oldtime;
//        }
//
//    }
//    fout << "Shortest Time (in minutes): " << shorttime << endl;
//
//    system("PAUSE");
//    return EXIT_SUCCESS;
//}

//ION Train Time
//int main()
//{
//	ifstream ion{ "ION_time.txt" };
//	bool trainDir{};
//	int longest{};
//	int current{};
//	int old{};
//	double trainCount{};
//	double waitSum{};
//
//	if (!ion)
//	{
//		cout << "File failed to open \n";
//	}
//	else
//	{
//		while (ion >> trainDir)
//		{
//			for (int count{}; count < 15; ++count)
//			{
//				++trainCount;
//				ion >> current;
//				waitSum += current - old;
//
//				if ((trainDir == 1) && (current - old) > longest)
//				{
//					longest = current - old;
//				}
//				old = current;
//			}
//			old = 0;
//		}
//
//		cout << "The longest time in minutes between any 2 northbound trains is " << longest << " \n";
//		cout << "The average wait time between any trains is " << waitSum / trainCount;
//	}
//	return 0;
//}

//Fibbonaci Recursion
//double fib(double initial, double second)
//{
//	cout << second << " " << (initial + second) / second << '\n';
//	fib(second, initial + second);
//	return 0;
//}
//int main()
//{
//	fib(0, 1);
//	return 0;
//}
//double yes(double x, double y)
//{
//	return 2;
//}
//double nice(double a, double b)
//{
//	return 1;
//}
//int main()
//{
//	cout << nice(yes(1, 2), 5);
//
//	return 0;
//}
//
//int main()
//{
//	fstream grades{ "grades.txt" };
//	const int MAX_SIZE{ 150 };
//	double marks[MAX_SIZE]{};
//	double sum;
//	int size{};
//	string names[MAX_SIZE]{};
//
//	while (grades >> names[size] >> marks[size])
//	{
//		sum += marks[size];
//		++size;
//	}
//
//	cout << "Average grade is " << sum / (size + 1);
//	
//	for (int count{}; count < size; ++count)
//	{

//Array Name Reverse
//int main()
//{
//	fstream names{ "MMEList.txt" };
//	const int TOTAL{ 67 };
//	string name[TOTAL]{};
//
//	if (!names)
//	{
//		cout << "File failed to open";
//	}
//
//	for (int count{}; count < TOTAL; ++count)
//	{
//		names >> name[count];
//	}
//
//	for (int count{ TOTAL - 1 }; count >= 0; --count)
//	{
//		cout << name[count] << '\n';
//	}
//
//	return 0;
//}

//Days in a month
//int main()
//{
//	string whatMonth[]{ "January","February","March","April","May","June","July","August","September","October","November","December" };
//	int days[]{ 31,28,31,30,31,30,31,31,30,31,30,31 };
//	int month{};
//	int year{};
//
//	cout << "Enter a month (1-12) and a year (1901-1920):";
//	cin >> month >> year;
//
//	if (((year % 4) == 0) && month == 2)
//	{
//		++days[month - 1];
//	}
//
//	cout << "In " << year << " " << whatMonth[month - 1] << " had " << days[month - 1] << " days.";
//
//	return 0;
//}

//Max Mountain Height
//int main()
//{
//	fstream fin{ "mountain.txt" };
//	const int MAXMOUNT{ 10 };
//	int mountainNum{};
//	double height[MAXMOUNT]{};
//	double max{};
//	string name[MAXMOUNT]{};
//
//	fin >> mountainNum;
//
//	cout << setw(25) << "Mountain Name" << setw(15) << "% Max Height\n";
//
//	for (int count{}; count < mountainNum; ++count)
//	{
//		fin >> name[count] >> height[count];
//		if (height[count] > max)
//		{
//			max = height[count];
//		}
//	}
//
//	for (int count{}; count < mountainNum; ++count)
//	{
//		cout << setw(25) << name[count] << setw(15) << (height[count] / max) * 100 << "%\n";
//	}
//
//	return 0;
//}

//Counting Votes
int votes(int yes[5])
{
	return yes[3];
}

int main()
{
	fstream election{ "election.txt" };
	int totalVotes{};
	int spoiled{};
	int hi[5]{1,2,3,4,5,6};
	cout << votes(hi[3]);
	
	return 0;
}