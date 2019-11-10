#include "Card.h"
#include<vector>
using std::vector;
#include <iostream>
#include <string>
using namespace std;
#include "DeckOfCards.h"
#include<time.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int i;
    DeckOfCards p;
    p.shuffle();
    for (i=0;i<52;i++)
    {
        cout <<p.dealCard().toString()<<endl;
        if (p.moreCards()==0)
            break;
    }




    return 0;
}
