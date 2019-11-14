#include <iostream>
#include"Card.h"
#include"DeckOfCards.h"

using namespace std;

int main()
{
    Card c(0,0); // create a class card
    DeckOfCards poker(c);  // create a class DeckOfCards
    for(int i=1;i<14;i++)  //get the pokers
    {
        for(int j=1;j<5;j++)
        {
            Card temp(i,j);
            poker.setDC(temp);
        }

    }

    poker.shuffle();    // shuffle pokers
    cout << "After shuffling: " << endl;
    poker.displayCD();   //show pokers

}//for me,it is so difficult to finish it well,so it's can't run correctly.
//Most functions such as shuffle and the end of function toString.
//I have tried my best to finish.That's all.
