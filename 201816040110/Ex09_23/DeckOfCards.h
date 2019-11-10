#ifndef DECKOFCARDS_H_INCLUDED
#define DECKOFCARDS_H_INCLUDED
#include "Card.h"
#include<vector>
using std::vector;
class DeckOfCards
{
public:
    explicit DeckOfCards();
    void shuffle();
    Card dealCard();
    bool moreCards();
    Card getCards(int );
private:
    vector <Card> deck;
    int currentCard=0;
};




#endif // DECKOFCARDS_H_INCLUDED
