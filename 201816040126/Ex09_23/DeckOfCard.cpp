#include <string>
#include <iostream>
#include <ctime>
#include "Card.h"
#include "DeckOfCards.h"

using namespace std;

DeckOfCards::DeckOfCards( Card &cd)
{
    setDC(cd);
}

void DeckOfCards::setPoker( Card &cd )//function to set pokers
{
    deck.push_back(cd);
}

vector <Card> DeckOfCards::getPoker()//function to get pokers
{
    return deck;
}

void DeckOfCards::shuffle()//function to shuffle.I can understand parts of it.I used to see it on the Internet.
{
    int f1 = 0;
    srand((int)(time(0)));

    for(int i=1;i<=52;i++)
    {
        int f2 = rand()%52;
        if(f2 != f1)
        {
            swap(deck[i],deck[f2]);  //randomly exchange deck's subscribe
            f1 = f2;
        }

    }
}

void DeckOfCards::displayPoker()//function to display pokers
{
    for(int j=1 ; j<(this->getPoker()).size();j++)
        cout << (this->getPoker()[j]).toString() << endl;
}

/*int DeckOfCards::dealCard()
{
    currentCard = 0;
    return currentCard;
}*/

bool DeckOfCards::moreCards()//It's used to judge
{
    if(deck.empty())
        return true;
    else
        return false;
}
