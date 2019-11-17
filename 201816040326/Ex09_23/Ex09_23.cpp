#include <iostream>
#include"Card.h"
#include"DeckOfCards.h"
#include<vector>
using namespace std;

int main()
{
    DeckOfCards card;
    card.shuffle();
    int num;
    cin>>num;
    if(num>52||num<0)
    {
        cout<<"this number is error";
    }
    else
    {
        for (int i = 0;i<num;i++)
        {
            cout<<deck[i].toString()<<endl;
        }
    }
    card.dealCard(10);
    for (int i = 0;i<5;i++)
    {
        cout<<deck[i].toString()<<endl;
    }  
    return 0;
}
