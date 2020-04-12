#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>

using namespace std;

//Declares the matrix
void declare(int row, int column, int **array)
{
    for (int i{}; i < row; ++i)
    {
        array[i] = new int[column];
    }
}

//Input matrix values
void initialize(int row, int column, int **array)
{
    for (int rowI{}; rowI < row; ++rowI)
    {
        cout << "Enter the values in row " << rowI + 1 << ": ";

        for (int columnI{}; columnI < column; ++columnI)
        {
            cin >> array[rowI][columnI];
        }
    }
}

int main()
{
    int row{};
    int column{};

    //Get size of matrix
    cout << "Enter a nxm (row by column) matrix size: ";
    cin >> row >> column;

    //Create a matrix to send to declaration function
    int **array{new int *[row]};

    declare(row, column, array);
    initialize(row, column, array);

    //Decide on what to do with matrix
    char symb{};
    cout << "Enter a matrix operation you would like to perform (+, -, *, RREF): ";
    cin >> symb;

    //2nd matrix for operations
    if (symb == '*')
    {
        row = column;
        cout << "Enter the columns in your 2nd matrix: ";
        cin >> column;

        int **array2{new int *[row]};

        declare(row, column, array2);
        initialize(row, column, array2);
    }
    else
    {
        int **array2{new int *[row]};

        declare(row, column, array2);
        initialize(row, column, array2);
    }

    switch (symb)
    {
        case '+':
        {
            for (int rowI{}; rowI < row; ++rowI)
            {
                for (int columnI{}; columnI < column; ++columnI)
                {
                    array[rowI][columnI] += array2[rowI][columnI];
                }
            }
            break;
        }
        case '-':
        {
            for (int rowI{}; rowI < row; ++rowI)
            {
                for (int columnI{}; columnI < column; ++columnI)
                {
                    array[rowI][columnI] -= array2[rowI][columnI];
                }
            }
            break;
        }
        case '*':
        {
        }
    }

    //Display matrix
    //The addresses of the matrix go ROW BY ROW i.e. First row finishes, then 2nd row starts, etc. NOT column by column
    for (int rowI{}; rowI < row; ++rowI)
    {
        for (int columnI{}; columnI < column; ++columnI)
        {
            cout << array[rowI][columnI] << " ";
        }
        cout << '\n';
    }

    //Procedure to delete matrix & return memory to system.
    for (int i{}; i < row; ++i)
    {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}