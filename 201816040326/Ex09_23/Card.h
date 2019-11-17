#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED



#endif // CARD_H_INCLUDED
class Card
{
public:
    Card(int face,int suit);
    void set_Face(int);
    void set_Suit(int);
    int get_Face();
    int get_Suit();
    string toString();//output face of suit
private:
    int face;
    int suit;
    
};
