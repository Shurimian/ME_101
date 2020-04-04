#include <iostream>
#include <cmath>

using namespace std;

double dist(double x, double y)
{
    return sqrt(pow(x, 2) + pow(y, 2));
}

int score(int currentScore, double x, double y)
{
    const double xBasket{13};
    const double yBasket{};
    double distance{dist(xBasket - x, yBasket - y)};

    if (distance <= 7.25)
    {
        return currentScore += 2;
    }
    else
    {
        return currentScore += 3;
    }
}
    
int main()
{
    int points{};
    double x{};
    double y{};

    do
    {
        cout << "Enter the x y coordinates of a successful shot: ";
        cin >> x >> y;
        points = score(points, x, y);
        cout << "Current score: " << points << '\n';
    } while (points <= 113);

    return 0;
}
    