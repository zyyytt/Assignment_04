//Card.h

#ifndef CARD_H
#define CARD_H

#include<string>

using namespace std;

class Card
{
public:
	Card(int f,int s);	//constructor
	Card(const Card &c);    //copy constructor
	~Card();			//destructor
	string toString() const;	//display face of suit
	void setFace(int f);		//set face of card
	void setSuit(int s);		//set suit of card
	int getFace() const;		//get face of card
	int getSuit() const;		//get suit of card
private:
	int face;
	int suit;
	static string Face[14] ;    //pass Face[0],store"A,2,~J,Q,K"
    static string Suit[5] ;        //pass Suit[0],store"Spade","Heart","Diamond","Club"
};
#endif // !CARD_H




