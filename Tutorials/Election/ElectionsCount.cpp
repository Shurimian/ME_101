#include <iostream>
#include <cmath>
#include <fstream>
#include <cstring>
#include <iterator>

using namespace std; 

int main()
{
	fstream election{ "election.txt" };
	int totalVotes{};
	int spoiled{};
    int winner{};
    int winnerNum{};
    int vote{};
	int voteTalley[5]{};
	
    while (election>>vote)
    {
        ++totalVotes;

        if (vote==1)
        {
            ++voteTalley[0];
        }
        else if (vote==2)
        {
            ++voteTalley[1];
        }
         else if (vote==3)
        {
            ++voteTalley[2];
        }
         else if (vote==4)
        {
            ++voteTalley[3];
        }
        else if (vote==5)
        {
            ++voteTalley[4];
        }
         else if (vote==6)
        {
            ++voteTalley[5];
        }
        else
        {
            ++spoiled;
        }
    }

    for (int count{};count<6;++count)
    {
        if (voteTalley[count]>winner)
        {
            winner=voteTalley[count];
            winnerNum=count+1;
        }
    }

    cout<<"The total votes are "<<totalVotes<<". Spoiled Votes total "<<spoiled<<" and the winner is candidate #"<<winnerNum<<" with a vote count of "<<winner;
	return 0;
}