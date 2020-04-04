#include <iostream>
#include <cmath>
#include <cstring>
#include <fstream>
#include <iomanip>
#include <algorithm>

using namespace std;

//int main()
//{
//	const int SIZE{ 3 };
//	int square[SIZE][SIZE]{};
//	int sumRow{};
//	int sumColumn{};
//	int sumDiagonal1{};
//	int sumDiagonal2{};
//
//	cout << "Enter 9 values one by one: ";
//
//	//Rows ->
//	for (int iii{}; iii < SIZE; ++iii)
//	{
//		//Columns vvv
//		for (int ii{}; ii < SIZE; ++ii)
//		{
//			cin >> square[iii][ii];
//		}
//	}
//	/*
//	for (int iii{}; iii < SIZE + 1; ++iii)
//	{
//		//Columns vvv
//		for (int ii{}; ii < SIZE + 1; ++ii)
//		{
//			cout << square[iii][ii];
//		}
//	}
//	*/
//
//	for (int iii{}; iii < (SIZE); ++iii)
//	{
//		sumRow = 0;
//		sumColumn = 0;
//		for (int ii{}; ii < (SIZE); ++ii)
//		{
//			sumRow += square[iii][ii];
//		}
//		cout << "Sum of Row " << iii + 1 << " is " << sumRow << '\n';
//
//		for (int ii{}; ii < (SIZE); ++ii)
//		{
//			sumColumn += square[ii][iii];
//		}
//		cout << "Sum of Column " << iii + 1 << " is " << sumColumn << '\n';
//	}
//
//	for (int iii{}; iii < (SIZE); ++iii)
//	{
//		sumDiagonal1 += square[iii][iii];
//	}
//	cout << "Sum of 1st diagonal is " << sumDiagonal1 << '\n';
//
//	for (int iii{}; iii < (SIZE); ++iii)
//	{
//		sumDiagonal2 += square[iii][2 - iii];
//	}
//	cout << "Sum of 2nd diagonal is " << sumDiagonal2 << '\n';
//
//	return 0;
//}

//Matrix Transpose
//const int SIZE{ 10 };
//int row{};
//int column{};
//void output(ofstream& transpose, double bigBox[SIZE][SIZE])
//{
//	for (int iii{}; iii < column; ++iii)
//	{
//		//Columns vvv
//		for (int ii{}; ii < row; ++ii)
//		{
//			transpose << bigBox[ii][iii] << " ";
//		}
//		transpose << '\n';
//	}
//}
//
//void matrice(ifstream& matrix, double bigBox[SIZE][SIZE])
//{
//	matrix >> row;
//	matrix >> column;
//	for (int iii{}; iii < row; ++iii)
//	{
//		//Columns vvv
//		for (int ii{}; ii < column; ++ii)
//		{
//			matrix >> bigBox[iii][ii];
//		}
//	}
//}
//int main()
//{
//	ifstream matrix{ "matrix.txt" };
//	ofstream transpose{ "transposeOut.txt" };
//	double bigBox[SIZE][SIZE]{};
//
//	matrice(matrix, bigBox);
//	output(transpose, bigBox);
//	return 0;
//}


//Restaurant
const int RESTAURANT{ 4 };
const int STUDENTS{ 200 };
int scoreCount[5][4]{};
int scoreValue[]{ 1,2,3,4,5 };
int highestRating[4]{};

void highestRate(int ratings[STUDENTS][RESTAURANT])
{
	for (int iii{}; iii < STUDENTS; ++iii)
	{
		for (int ii{}; ii < RESTAURANT; ++ii)
		{
			for (int i{}; i < 5; ++i)
			{
				if (ratings[STUDENTS][RESTAURANT] == scoreValue[i])
				{
					++scoreCount[i][RESTAURANT];
				}
			}
		}
	}
}
void readRatings(ifstream& restaurant, int ratings[STUDENTS][RESTAURANT])
{
	for (int iii{}; iii < STUDENTS; ++iii)
	{
		for (int ii{}; ii < RESTAURANT; ++ii)
		{
			restaurant >> ratings[STUDENTS][RESTAURANT];
		}
	}
}


int main()
{
	ifstream restaurant{ "restaurant.txt" };
	int ratings[STUDENTS][RESTAURANT]{};

	readRatings(restaurant, ratings);
	highestRate(ratings);

	for (int iii{}; iii < 5; ++iii)
	{
		for (int ii{}; ii < 4; ++ii)
		{
			for (int i{}; i < 4; ++i)
			{
				if (scoreCount[iii][ii] > highestRating[ii])
				{
					highestRating[i] = scoreCount[iii][ii];
				}
			}
		}
	}

	for (int i{}; i < 4; ++i)
	{
		cout << highestRating[i] << " ";
	}
	return 0;
}