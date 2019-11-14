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
    bool ApairofCards(int);//Determine if there is a pair
    bool TwopairsofCards(int);//Determine if there are two pairs
    bool Threebomb(int);//Determine if there are three cards of the same number
    bool fourSameCards(int);//Determine if there are four cards of the same number
    bool fiveSameSuits(int);// Determine if there are five flush cards
    bool fiveConsecutiveCards(int);//Determine if there are five consecutive cards
private:
    int currentCard;//Subscript of the next processing card
    vector <Card> deck ;//Deposit 52 cards with vector
};


#endif // DECKOFCARDS_H_INCLUDED
