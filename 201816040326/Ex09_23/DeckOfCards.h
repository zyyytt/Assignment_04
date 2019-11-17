#ifndef DECKOFCARDS_H_INCLUDED
#define DECKOFCARDS_H_INCLUDED
#include<vector>
#include"Card.h"


#endif // DECKOFCARDS_H_INCLUDED
class DeckOfCards
{
public:
    DeckOfCards();
    void shuffle();
    Card dealCard();
    bool moreCard();
private:
    vector<Card>deck;
    int currentCard;
};
