#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED
#include <string>
/*In this class ,We will define the types of all cards*/
class Card
{
public:
    Card(int = 0 , int = 0 );//Find two subscripts
    void toInt(int , int );//Find two subscripts
    std::string toString();//return the name of card
private:
    int face;
    int suit;
    static std::string nface[13];
    static std::string nsuit[4];
};

#endif // CARD_H_INCLUDED
