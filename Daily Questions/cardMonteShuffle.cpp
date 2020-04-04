#include <iostream>

using namespace std;

void threeCardMonteShuffle (string & leftCard, string & centreCard, string & rightCard)
{
    string cardInHand = rightCard;
    rightCard = centreCard;
    centreCard = cardInHand;

    cardInHand = leftCard;
    leftCard = centreCard;
    centreCard = cardInHand;
}

int main()
{
    string left = "two of spades";
    string middle = "two of clubs";
    string right = "queen of hearts";

    threeCardMonteShuffle (left, middle, right);
    cout<<middle;
}