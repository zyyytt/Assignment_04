#include <stdexcept>
#include <iomanip>
#include <iostream>
#include "Card.h"
#include <string>

string Card::coulor[4]={"hert","club","diamond","spade"};
string Card::worth[13]={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
Card::Card(int x,int y)
{
    face=x;
    suit=y;
}
string Card:: toString()
{

    return (coulor[face]+" of "+worth[suit]);
}
int Card::getsuit()
{
    return suit;
}
int Card::getface()
{
    return face;
}
