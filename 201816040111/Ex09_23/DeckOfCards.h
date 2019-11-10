#ifndef DECKOFCARDS_H_INCLUDED
#define DECKOFCARDS_H_INCLUDED
#include "Card.h"
#include <vector>
#include <string>
using namespace std;
class DeckOfCards
{
public:
    DeckOfCards (Card&);
    void Createpoker(Card&);
    void Deletepoker();
    void shuffle();
    int dealCard();//Return subscript of the next processing card
    void LicensingPoker();
    bool moreCards();
private:
    int currentCard;//Subscript of the next processing card
    vector <Card> deck ;//Deposit 52 cards with vector
};


#endif // DECKOFCARDS_H_INCLUDED
