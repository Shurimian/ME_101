#include <iostream>
#include <algorithm>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
	ifstream message{"secret_message.txt"};
	const int MAX_SIZE{100};
	int order[MAX_SIZE]{};
	string word[MAX_SIZE]{};
	int currentSize{};

	while (message>>word[currentSize]>>order[currentSize])
	{
        cout<<word[currentSize]<<" "<<order[currentSize]<<'\n';
		++currentSize;
	}

	for (int iii{} ; iii < currentSize ; ++iii)
	{
        for (int index{}; index < currentSize ; ++index)
        {
		    if (order[index] > order[index+1])
	    	{
		    	swap(order[index],order[index+1]);
			    swap(word[index],word[index+1]);
		    }
        }
	}

	for (int iii{} ; iii < currentSize ; ++iii)
	{
		cout<<word[iii] <<" ";
	}

	return 0;
}