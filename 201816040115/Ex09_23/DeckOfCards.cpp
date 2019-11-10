//DeckOfCards.cpp

#include "DeckOfCards.h"
#include"Card.h"
#include<ctime>
#include<cstdlib>
#include<algorithm>
#include<iostream>

//function to constructor
DeckOfCards::DeckOfCards(const Card &c)
{
    setEachCard(c);
}

DeckOfCards::~DeckOfCards()
{

}
//function to construct deck
void DeckOfCards::setEachCard(const Card &c)
{
    deck.push_back(c);
}

//function to get deck
vector <Card> DeckOfCards::getDeck()
{
	  return deck;
}

//function to shuffle poker
void DeckOfCards::shuffle()
{
    int flag=0;     //subscribe 0 is not using
    srand(static_cast<unsigned int>(time(0)));  //Randomly generated seed
    for(int i=1;i<=52;i++)
    {
        int t=rand()%52;
        if(t!=flag)
        {
            swap(deck[i],deck[t]);  //randomly exchange deck's subscribe
            flag=t;
        }

    }
}

//function to print poker
void DeckOfCards::printRandomPoker()
{
    for(unsigned int j=1;j<(this->getDeck()).size();j++)
        cout << (this->getDeck()[j]).toString() << endl;
}

/*int DeckOfCards::dealCard()
{
    currentCard=0;
    return currentCard;
}

bool DeckOfCards::moreCards()
{
    if(deck.empty())
        return true;
    else
        return false;
}
*/
