#include <iostream>
#include "Card.h"
#include "DeckOfCards.h"
using namespace std;

int main()
{
    Card cards;//Define cards in the class of Card
    DeckOfCards deckcard(cards);//Use cards as the object of the deckcard
    deckcard.Createpoker(cards);//Generate 52 cards
    deckcard.Deletepoker();//Since I don't know why, I generated two poker cards, so I deleted one.
    cout<<"Poker is ready"<<endl;
    deckcard.shuffle();//52 cards are ready to start shuffling
    cout<<"Congratulation!  Successful shuffling!"<<endl;
    cout<<"Start trading now!"<<endl;
    deckcard.LicensingPoker();//Starting to deal, I default to four players, so each player has 13 cards.
    if(deckcard.moreCards()  == 1)//Determine if the poker cards is empty
        cout<<"\nPlaying cards are empty"<<endl;
        else
            cout <<"\nPlaying cards are not empty"<<endl;
    return 0;
}
