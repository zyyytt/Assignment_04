#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED
# define N 500
#include <string>
using namespace std;
class Card
{
public:
    explicit Card( int , int );
    string toString ();
    void setCard(int , int);
private:
    int face;
    int suit;
    static string Face[13];
    static string Suit[4];
};


#endif // CARD_H_INCLUDED
