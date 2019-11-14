#include <iostream>
#include <string>
#include <vector>

using namespace std;

#endif

class DeckOfCards
{
public:
    DeckOfCards( Card &cd);
    void setPoker( Card &cd );//function to set poker
    int dealCard();//return the next poker

    vector <card> getPoker();//function to get pokers
    void shuffle();//function to shuffle
    void displayPoker();//function to show pokers
    bool moreCards();
private:
    vector <card> deck;
    int currentCard;

};
