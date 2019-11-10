//DeckOfCards.h

#ifndef DECKOFCARD_H
#define DECKOFCARD_H

#include<vector>
#include"Card.h"

class DeckOfCards
{
public:
	DeckOfCards(const Card & c);    //constructor
	~DeckOfCards();
	void shuffle(); //function to shuffle
	int dealCard(); //return next card sub.
	void setEachCard(const Card &c);    //set deck, push back into vector
	vector <Card> getDeck() ;       //return class Card of vector
	bool moreCards();
	void printRandomPoker();        //licensing cards
private:
    vector <Card> deck; //have 52 cards with vector
    int currentCard;    //the next card sub.

};

#endif // DECKOFCARD_H


