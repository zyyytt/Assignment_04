#include "Card.h"
#include<vector>
using std::vector;
#include <iostream>
#include <string>
using namespace std;
#include "DeckOfCards.h"
#include<time.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
DeckOfCards::DeckOfCards()
{
    int i ,j ;
    for (i=0;i<4;i++)
    {
        for( j=0 ; j<13 ;j++)
        {
            Card a( j , i );
            deck.push_back(a);
        }
    }
}
void DeckOfCards::shuffle()
{
    int i , j,z,k;
    srand((unsigned int)time (NULL));
    for (i=0 ;i<52 ;i++)
    {
        z=rand()%51;
        Card f=deck[i];
        deck[i]=deck[z];
        deck[z]=f;
    }
}
Card DeckOfCards::dealCard()
{
    currentCard++;
    return deck[currentCard-1];
}
bool DeckOfCards::moreCards()
{
    if(currentCard>51)
    {
        return 0;
    }
    else if(currentCard<=51)
    {
        return 1;
    }
}

Card DeckOfCards::getCards(int i)

{
    return deck[i];
}







