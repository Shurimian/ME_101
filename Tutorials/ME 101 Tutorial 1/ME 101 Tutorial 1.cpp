#include <iostream>


using namespace std;

//Happy Year Code
//int main()
//{
//    cout << "Enter a year ";
//    int year{ 0 }; 
//    cin >> year;
//    cout << "Happy " << year << '\n';
//    cout << "Goodbye " << year - 1 << '\n';
//    return 0;
//}

//Force with fixed acceleration
//int main()
//{
//	cout << "Enter the mass of a given object: ";
//	double mass{};
//	cin >> mass;
//	cout << "The force exerted by gravity on this object is " << mass * 9.81 << "N\n";
//	return 0;
//}

//Force with variable acceleration
//int main()
//{
//	cout << "Enter the mass of a given object: ";
//	double mass{};
//	cin >> mass;
//	cout << "Enter the acceleration due to gravity: ";
//	double acceleration{};
//	cin >> acceleration;
//	cout << "The force exerted by gravity on this object is " << mass * acceleration << "N\n";
//	return 0;
//}


//int particle()
//{
//	struct particle
//	{
//		double mass;
//		double position;
//	};
//
//	cout << "Enter the mass of a particle: ";
//	double mass1{};
//	cin >> mass1;
//	cout << "Enter the position of this particle relative to the origin: ";
//	double position1{};
//	cin >> position1;
//	static particle first{ mass1, position1 };
//	return 0;
//}
//
//int main()
//{
//	particle(); 
//	return 0;
//}

//CAITLIN THANK YOU SO MUCH LMAO
int main()
{
	double totalm{};
	double numerator{};
	double sum{}; 
	double mass{};
	double position{};

	for (int i = 1; i <= 3; i = i + 1)
	{

		cout << "Enter the mass of a particle: ";
		cin >> mass;
		cout << "Enter the position of this particle relative to the origin: "; 
		cin >> position;
		totalm = totalm + mass;
		numerator =numerator + mass * position;
		
	}
	
	cout << "The centre of mass of these 3 particles is: " << numerator / totalm;

	return 0;

}
			

	

//Naming Code
//int main()
//{
//	cout << "Enter your name: ";
//	string name{};
//	cin >> name;
//	cout << "Hello " << name;
//	return 0;
//}
