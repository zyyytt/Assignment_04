#include <iostream>
#include <string>
#include "Card.h"

using namespace std;

string Card::Face[14] = {"0","A","2","3","4","5","6","7","8","9","10","J","Q","K"};//set 13 faces
string Card::Suit[5] = {"0","Heart","Diamond","Spade","Club"};//set four suits
//the "0" is used to make the subscripts and numbers same.A good way to transmit information

Card::Card( int f , int s)
{
    setFace(f);
    setSuit(s);
}

Card::Card( const Card &c)
{
    setFace(c.getFace());
    setSuit(c.getSuit());
}

void Card::setFace( int f )////function to set face
{
    face = f;
}

void Card::setSuit( int s )//function to set suit
{
    suit= s;
}

int Card::getFace()//function to get face
{
    return face;
}

int Card::getSuit()//function to get suit
{
    return suit;
}

string Card::toString()//show the pokers in a fixed way
{
    return (Face[this->getFace()]) + " of " +Suit[this->getSuit()]
}
