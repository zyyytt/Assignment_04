#include <string>
#include <iostream>

using namespace std;

#endif // CARD_H_INCLUDED

class Card
{
public:
    Card( int f = 0, int s = 0);
    Card(const Card &c);
    void setFace(int f);//function to set face
	void setSuit(int s);//function to set suit

	int getFace();//function to get face
	int getSuit();//function to get suit
    string toString();//display the poker with face and suit


private:
    int face;
    int suit;
    /*static string Face[14];
    static string Suit[5];*/
    //It's strange that I can't define them.I don't find the solutions.
};//end class Card
