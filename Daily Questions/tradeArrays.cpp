#include <iostream>

using namespace std;

void tradeArrays(float array1[], float array2[], int size)
{
    int tempInt{};
    for (int i{}; i < size; ++i)
    {
        tempInt = array2[i];
        array2[i] = array1[i];
        array1[i] = tempInt;
    }
}

int main()
{
    int size = 5;
    float array1[size]{1, 2, 3, 4, 5};
    float array2[size]{6, 7, 8, 9, 10};
    tradeArrays(array1, array2, size);

    for (int i{}; i < size; ++i)
    {
        cout << array1[i];
    }

    for (int i{}; i < size; ++i)
    {
        cout << array2[i];
    }

    return 0;
}