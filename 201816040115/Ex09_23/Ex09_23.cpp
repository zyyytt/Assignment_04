//Ex09_23.cpp

#include <iostream>
#include"Card.h"
#include"DeckOfCards.h"

int main()
{
    Card c1(0,0); //to create a class card
    //cout << c1.toString() ;
    DeckOfCards poker(c1);  //to create a class DeckOfCards
    for(int i=1;i<=13;i++)  //initialize a deck of poker
    {
        for(int j=1;j<=4;j++)
        {
            Card temp(i,j);
            poker.setEachCard(temp);
        }

    }
    cout << "Before shuffling: " << endl;
    poker.printRandomPoker();
    cout << endl;
    poker.shuffle();    //in order to shuffle poker
    cout << "After shuffling: " << endl;
    poker.printRandomPoker();   //license poker


}

