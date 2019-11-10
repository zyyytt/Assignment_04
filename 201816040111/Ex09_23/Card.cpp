#include "Card.h"

using namespace std;
/*Two static strings are all the possibilities of the face value and suit of the card*/
string Card::nface[13] = {"A","2","3","4","5","6","7","8","9","10","J","Q","K"};

string Card::nsuit[4] = {"Spade","Heart","Diamond","Club"};
/*f and s are the subscripts of nface and nsuit respectively*/
Card::Card(int f,int s)
{
    toInt(f,s);
}
/*The private of face and suit can be the subscripts of nface and nsuit*/
void Card::toInt(int f,int s)
{
    face = f;
    suit = s;
}

string Card::toString()
{
    string conjunction(" of ");
     return nface[face] + conjunction + nsuit[suit];//Then,Can form 52 cards by 13 multiply 4
}
