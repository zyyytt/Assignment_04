#include <iostream>
#include"Card.h"
#include"DeckOfCards.h"
#include<vector>
using namespace std;

Card::Card(int f,int s)
{
    set_Face(face);
    set_Suit(suit);
}

void Card::set_Face(int f)
{
    if(face>14||face<0)
        cout<<"Data does not meet the requirements"<<endl;
    else
        face = f;
}

void Card::set_Suit(int s)
{
    if (suit<1||suit>4)
        cout<<"Data does not meet the requirements"<<endl;
    else
        suit = s;
}

int Card::get_Face()
{
    return face;
}

int Card::get_Suit()
{
    retuen suit;

}

string Card::toString()
{
    static string face1[15]={ "", "ace", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "jack", "queen", "king", "joker"};
    static string suit1[5]={ "", "spade", "heart", "club", "diamond"};
    return string(Face[getFace()] + " of " + Suit[getSuit()]);
}
}
