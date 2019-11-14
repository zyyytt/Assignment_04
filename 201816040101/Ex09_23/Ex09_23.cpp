//产生DeckOfCards对象，洗牌，发牌
#include <iostream>
#include "Card.h"
#include "DeckOfCards.h"
#include <string.h>
#include <vector>
using namespace std;

int main()
{
    DeckOfCards Deck;

    vector<Card>player;
    Card card=Deck.dealCard();

    for(int j=0;j<5;j++)
    {
        player.push_back(card);
        cout<<"It is the "<<j+1<<" time :"<<player[j].toString()<<endl;
        card=Deck.dealCard();
    }
    Deck.Onedouble();
    Deck.Twodouble();
    Deck.Threesame();
    Deck.Foursame();
    Deck.Fivesame();
    Deck.Flower();
    //for()
    return 0;
}
