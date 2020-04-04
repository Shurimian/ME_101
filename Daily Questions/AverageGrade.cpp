#include <iostream>

using namespace std;

const int NUM_STUDENTS = 120;
const int NUM_ASSIGNMENTS = 10;
double averageGrade(double rawGrades[NUM_STUDENTS][NUM_ASSIGNMENTS])
{
    double totalGrades = 0;

    for (int student{}; student<NUM_STUDENTS;++students)
    {
        double gradeIndividual = 0;

        for (int assignment{}; assignment < NUM_ASSIGNMENTS; ++assignment)
        {
            gradeIndividual += rawGrades[student][assignment];
        }
        totalGrades += gradeIndividual;
    }
    double averageGrade = totalGrades / (NUM_STUDENTS * NUM_ASSIGNMENTS);

    return averageGrade;
}       

int main()
{
    double grades[NUM_STUDENTS][NUM_ASSIGNMENTS]{};
    averageGrade(grades);

    return 0;
}
