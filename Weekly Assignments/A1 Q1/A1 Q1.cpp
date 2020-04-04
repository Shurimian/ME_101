/*
Ronald

*/
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

//Question 3
int main()
{
	cout << "Please enter 4 INTEGERS: \n";
	int a{};
	int b{};
	int c{};
	int d{};
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	int sum{ a + b + c + d };
	double average{ sum / 4.0 };
	cout << "The sum of your numbers are: " << sum << " and the mean value is " << average;
	return 0;
}

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