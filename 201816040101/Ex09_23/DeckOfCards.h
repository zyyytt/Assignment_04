#include <vector>
class DeckOfCards
{
public:
    DeckOfCards();
    void shuffle( );//洗牌
    Card dealCard();//返回下一张牌
    bool moreCard( );//判断是否有牌要处理
    void Onedouble();
    void Twodouble();
    void Threesame();
    void Foursame();
    void Fivesame();
    void Flower();
private:
    int currentCard;//the next card
    vector<Card>deck ;
};
