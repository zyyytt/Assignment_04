# define N 500
#include <iostream>
#include <string>
using namespace std;
#include "Card.h"
string Card::Face[13]={"Ace","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Eleven","Twelve","Thirteen"};
string Card::Suit[4] = {"Spade","Heart","Diamond","Club"};
Card::Card( int f, int s )
{
    setCard( f , s);
}
void Card::setCard(int f ,int s)
{
    face=f;
    suit=s;
}
string Card::toString()
{
    string z,p=" of ";
    z=Face[face]+p+Suit[suit];
    return z;
}
