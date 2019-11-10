#include "DeckOfCards.h"
#include "Card.h"
#include <vector>
#include <string>
#include <iostream>
#include <ctime>
using namespace std;
/*Let's start creating poker together.*/
DeckOfCards::DeckOfCards( Card &cd)
{
    Createpoker(cd);
}

void DeckOfCards::Createpoker( Card &cd )
{
    /*With two loops. i represent the subscript of nface and j represent the subscript of nsuit in the Class of Card.*/
    for(int i = 1; i <= 13; i++)
    {
        for(int j = 1; j <= 4; j++)
        {
            cd.toInt(i-1,j-1);//Return the card name in the class of Card by subscript
            deck.push_back(cd);//use the function of push_back to create 52 poker cards
        }
    }
}
/*I don't know why, I created 104 cards, which is two sets of poker, so I had to delete a set of poker.*/
void DeckOfCards::Deletepoker()
{
    for(int i = 0; i<52; i++)
    {
        deck.pop_back();
    }
}

void DeckOfCards::shuffle()
{
    int temp1 = -1;//First,I defined temp1 = -1.I think it is useful.
    srand((int)time(0));  // Generate random seeds,Prevent random numbers from being repeated every time the program runs
    for (int i = 0; i < 52; i++)
    {
        int temp = rand()%(52);//defined temp is 0-52 random number
        if(temp != temp1)//Because the temp is -1,at the first time ,temp is not temp1
        {
            swap(deck[i], deck[temp]) ;//So swap the subscript of i and temp
            temp1 = temp;//temp1  =  temp to prevent finding the same random number in the loop
        }
    }
}

int DeckOfCards::dealCard()
{
    currentCard = 0;//Currentcard is the subscript of the 52-card deck at the time of licensing, so the default is zero.
    return currentCard;
}
/*Start licensing!!*/
void DeckOfCards::LicensingPoker()
{
    int j;// j is total number of cards dealt
    for(int i=0; i<4; i++)
    {
        /*The next operation is to show how to send 4 people cards.*/
        cout<<"Player  "<<i+1<<endl;
        for( j = dealCard() + 13*i; j < dealCard() + 13*i + 13; j++)
        {
            cout<< "card  "<<(((j+1)%13==0)?13:(j+1)%13)<<" : "<<deck[j].toString()<<endl;

        }
        cout<<"\n\n";
    }
    /*How many cards are sent, how many cards are to be deleted in the vector,
    to determine whether the deck is empty, so I use pop_back,
    and there is no order to delete the cards, just to see if the deck can be deleted.*/
    for(int d=0;d<j;d++)
        {
            deck.pop_back();
        }
}
/*Judge empty*/
bool DeckOfCards::moreCards()
{
    if(deck.empty())
        return true;
    else
        return false;
}
