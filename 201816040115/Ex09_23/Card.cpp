//Card.cpp

#include "Card.h"

string Card::Face[14] = { "*","A","2","3","4","5","6","7","8","9","10","J","Q","K" };
string Card::Suit[5] = {"*","Spade","Heart","Diamond","Club"};

//function to constructor
Card::Card(int f, int s)
{
	setFace(f);
	setSuit(s);
}

//overload to copy constructor
Card::Card(const Card &c)
{
    setFace(c.getFace());
    setSuit(c.getSuit());
}

Card::~Card()
{
}

void Card::setFace(int f)
{
    face=f;
}
void Card::setSuit(int s)
{
    suit=s;
}
int Card::getFace() const
{
    return face;
}
int Card::getSuit() const
{
    return suit;
}

//function to display card's style as "face of suit"
string Card::toString() const
{
    return (Face[this->getFace()]+" of "+Suit[this->getSuit()]);
}

