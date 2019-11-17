#include <iostream>
#include"Card.h"
#include"DeckOfCards.h"
#include<vector>
using namespace std;

DeckOfCards::DeckOfCards()
{
    for (int i=0;i<13;++i)
    {
		for (int j=0;j<4;++j) 
		{
			deck.push_back(Card(i, j));
		}
	}
	deck.push_back(Card(14, 1));
	currentCard = 0;
}

Card DeckOfCards::dealCard()
{
	currentCard++;
	return deck[currentCard];
}

bool DeckOfCards::moreCard()
{
	return currentCard < deck.size();
}

void DeckOfCards::shuffle()//不懂怎么写。。。
