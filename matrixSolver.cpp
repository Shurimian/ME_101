#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    int row{};
    int column{};

    cout << "Enter a nxm (row by column) matrix size: ";
    cin >> row >> column;

    int **array{new int *[row]};
    for (int i{}; i < row; ++i)
    {
        array[i] = new int[column];
    }

    for (int rowI{}; rowI < row; ++rowI)
    {
        for (int columnI{}; columnI < column; ++columnI)
        {
            array[rowI][columnI] = 0;
        }
    }

    for (int rowI{}; rowI < row; ++rowI)
    {
        cout << "Enter the values in row " << rowI + 1 << ": ";

        for (int columnI{}; columnI < column; ++columnI)
        {
            cin >> array[rowI][columnI];
        }
    }

    for (int rowI{}; rowI < row; ++rowI)
    {
        for (int columnI{}; columnI < column; ++columnI)
        {
            cout << array[rowI][columnI] << " ";
        }
        cout << '\n';
    }

    for (int i{}; i < row; ++i)
    {
        delete[] array[i];
    }

    delete[] array;

    return 0;
}