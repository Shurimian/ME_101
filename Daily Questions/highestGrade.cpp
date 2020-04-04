#include <iostream>

using namespace std;

int indexOfHighestGrade(float grades[], int numberOfStudents)
{
    int indexOfHighestGrade = 0;

    for (int student{}; student < numberOfStudents; ++student)
    {
        if (grades[student] > grades[indexOfHighestGrade])
        {
            indexOfHighestGrade = student;
        }
    }

    return indexOfHighestGrade;
}

int main()
{
    const int NUM_STUDS = 7;
    string names[NUM_STUDS]{"steve", "lee", "jeff", "mo", "wendy", "alexsa", "bill"};
    float grades[NUM_STUDS]{65.4, 73.2, 84.8, 49.9, 75, 87.4, 79.9};

    int topStudent = indexOfHighestGrade(grades, NUM_STUDS);
    cout << names[topStudent] << " " << grades[topStudent];

    return 0;
}