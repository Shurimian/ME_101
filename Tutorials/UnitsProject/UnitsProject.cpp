
#include <iostream>

using namespace std;

int main()
{
    std::cout << "Hello World!\n";
}

int main ()
{
    cout << "Enter a distance in nautical miles\n"; 
    int distance{};
    cin >> distance; 
    const double conversion{ 1852 };
    const double cable{ conversion / 2 };
    cout << "Your distance in kilometres is: " << distance * (conversion)'\n';

