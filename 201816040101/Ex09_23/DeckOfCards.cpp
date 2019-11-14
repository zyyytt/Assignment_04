#include <stdexcept>
#include <iostream>
#include "Card.h"
#include "DeckOfCards.h"
#include <string>
#include <cstdlib>
#include <vector>
#include <time.h>

using namespace std;
DeckOfCards::DeckOfCards()
{
    for(int i=0;i<4;i++)
       for(int j=0;j<13;j++)
        deck.push_back(Card(i,j));
        currentCard=0;
        shuffle();
}
void DeckOfCards:: shuffle()//洗牌
{
    srand( time(0));
    for(int x=0;x<52;x++)
    {
        int y=rand()%52;
        swap(deck[x],deck[y]);
    }
}
Card DeckOfCards:: dealCard()//返回下一张牌
{
       return deck[currentCard++];
}
bool DeckOfCards:: moreCard( )//判断是否有牌要处理
{
    if(currentCard>=-1)
        return true;
    else
        return false;
}
void DeckOfCards::Onedouble()
{
    for(int i=0;i<5;i++)
        for(int j=i+1;j<5;j++)
            if(deck[i].getsuit()==deck[j].getsuit())
            {
                cout<<"There is one double\n";
                return ;
            }
}
void DeckOfCards::Twodouble()
{
    int temp=0;
    int x=0;
    for(int i=0;i<5;i++)
        for(int j=i+1;j<5;j++)
            if(deck[i].getsuit()==deck[j].getsuit())
            {
                temp++;
                if(temp==1)x=deck[i].getsuit();
                if(temp==2&&x!=deck[i].getsuit())
                    {
                      cout<<"There is two double\n";
                      return ;
                    }
            }
}
void DeckOfCards::Threesame()
{
    int temp=1;
    for(int i=0;i<5;i++)
    {
         temp=1;
         for(int j=i+1;j<5;j++)
            if(deck[i].getsuit()==deck[j].getsuit())
        {
            temp++;
            if(temp==3)
                cout<<"There is a three same cards\n";
        }
    }
}
void DeckOfCards::Foursame()
{
    int temp=1;
    for(int i=0;i<5;i++)
    {
         temp=1;
         for(int j=i+1;j<5;j++)
            if(deck[i].getsuit()==deck[j].getsuit())
        {
            temp++;
            if(temp==4)
                {cout<<"There is bomb\n";
                 return ;
                }
        }
    }
}
void DeckOfCards::Fivesame()
{
    int temp=1;
    for(int i=0;i<5;i++)
    {
         temp=1;
         for(int j=i+1;j<5;j++)
            if(deck[i].getface()==deck[j].getface())
        {
            temp++;
            if(temp==5)
                {cout<<"There are five same face\n";
                 return ;
                }
        }
    }
}
void DeckOfCards::Flower()
{
    vector<int>suits(5);
    int i,j;
    for( i=0;i<5;i++)
        suits[i]=deck[i].getsuit();
    for(i=0;i<5;i++)
        for(j=i+1;j<5;j++)
            if(suits[i]>suits[j])
               swap(suits[i],suits[j]);
    if(suits[4]-suits[0]==4)
        cout<<"There is a flower\n";
}
