int main()
{
	fstream fin{ "mountain.txt" };
	const int MAXMOUNT{ 10 };
	int mountainNum{};
	double height[MAXMOUNT]{};
	double max{};
	string name[MAXMOUNT]{};

	fin >> mountainNum;

	cout << setw(25) << "Mountain Name" << setw(15) << "% Max Height\n";

	for (int count{}; count < mountainNum; ++count)
	{
		fin >> name[count] >> height[count];
		if (height[count] > max)
		{
			max = height[count];
		}
	}

	for (int count{}; count < mountainNum; ++count)
	{
		cout << setw(25) << name[count] << setw(15) << (height[count] / max) * 100 << "%\n";
	}

	return 0;
}