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
            cd.toIntf(i-1);//Return the card name in the class of Card by subscript
            cd.toInts(j-1);
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
        int temp = rand()%(51);//defined temp is 0-52 random number
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
    for(int i=0; i<10; i++)
    {
        /*The next operation is to show how to send 4 people cards.*/
        cout<<"Player  "<<i+1<<endl;
        for( j = dealCard() + 5*i; j < dealCard() + 5*i + 5; j++)
        {
            cout<< "card  "<<(((j+1)%5==0)?5:(j+1)%5)<<" : "<<deck[j].toString()<<endl;
        }
        if ( fourSameCards(j) == 1 )
            cout << "Here are four of the same cards" << endl;
        else if( Threebomb(j) == 1 )
            cout << "There is three of a kind" << endl;
        else if ( TwopairsofCards(j) == 1 )
            cout << "There are two pairs of cards" <<endl;
        else if ( ApairofCards(j) == 1 )
            cout << "There is a pair of cards " <<endl;
        else if ( fiveSameSuits(j) == 1)
            cout << "There are five cards in the same color" << endl;
        else if ( fiveConsecutiveCards(j) == 1)
            cout << "There are five consecutive cards with face value" << endl;
        cout<<"\n\n";
    }
    /*How many cards are sent, how many cards are to be deleted in the vector,
    to determine whether the deck is empty, so I use pop_back,
    and there is no order to delete the cards, just to see if the deck can be deleted.*/
    for(int d=0; d<j; d++)
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
//Determine if there is a pair
bool DeckOfCards::ApairofCards(int ccard)
{
    int i,j=0,k;
    /*Use a double loop to find a pair of pairs*/
    for( i = ccard-2 ; i >= ccard-5 ; i--)
    {
        for( k = i ; k >= ccard - 5 ; k--)
            if (deck[k].Intf() == deck[i + 1].Intf())
            {
                j = 1;
                break;
            }
    }
    if ( j == 1 )
        return true;
    else
        return false;
}
//Determine if there are two pairs
bool DeckOfCards::TwopairsofCards(int ccard)
{
    int i,j=0,k;
    /*Use a double loop to find two pairs*/
    for( i = ccard-2 ; i >= ccard-5 ; i--)
    {
        for( k = i ; k >= ccard - 5 ; k--)
        {
            if (deck[k].Intf() == deck[i + 1].Intf())
            {
                j ++ ;//When j is equal to 2, it means that there are two pairs of cards.
            }
        }
    }

    if ( j == 2 )
        return true;
    else
        return false;

}
//Determine if there are three cards of the same number
bool DeckOfCards::Threebomb(int ccard)
{
    int i,j=0,k,t = 0;
    /*When j is equal to 3, it means that there are three cards with the same denomination.*/
    for( i = ccard-2 ; i >= ccard-5 ; i--)
    {
        for( k = i ; k >= ccard - 5 ; k--)
        {
            if (deck[k].Intf() == deck[i + 1].Intf())
            {
                j ++ ;
                if ( j == 3 )
                {
                    t = 1;
                    break;
                }
            }

        }
    }
    if ( t == 1 )
        return true;
    else
        return false;
}
//Determine if there are four cards of the same number
bool DeckOfCards::fourSameCards(int ccard)
{
    int i,j=0,k,t = 0;
    /*When j is equal to 4, it means that there are four cards with the same denomination.*/
    for( i = ccard-2 ; i >= ccard-5 ; i--)
    {
        for( k = i ; k >= ccard - 5 ; k--)
        {
            if (deck[k].Intf() == deck[i + 1].Intf())
            {
                j ++ ;
                if ( j == 4 )
                {
                    t = 1;
                    break;
                }
            }

        }
    }
    if ( t == 1 )
        return true;
    else
        return false;
}
// Determine if there are five flush cards
bool DeckOfCards::fiveSameSuits(int ccard)
{
    int i,j=0,k;
    /*When j is equal to 5, it means that there are five cards of the same color.*/
    for( i = ccard-2 ; i >= ccard-5 ; i--)
    {
        for( k = i ; k >= ccard - 5 ; k--)
            if ( deck[k].Ints() == deck[i + 1].Ints())
            {
                j ++ ;
            }
    }
    if ( j == 5 )
        return true;
    else
        return false;
}
//Determine if there are five consecutive cards
bool DeckOfCards::fiveConsecutiveCards(int ccard)
{
    int i,j=0,k = deck[ccard - 1].Intf(),t = 1;
    /*When j is equal to 5, it means that there are five cards with consecutive denominations.*/
    for( i = ccard-2 ; i >= ccard-5 ; i--)
    {
        if (deck[i].Intf() == k - t)
        {
            j++;
        }
        t++;
    }
    if ( j == 5 )
        return true;
    else
        return false;
}
