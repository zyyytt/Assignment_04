#include <string>
#include <iostream>
using namespace std;

class Card
{
public:
    Card(int ,int );
    string toString();
    int getsuit();
    int getface();
private:
    int face;//花色
    int suit;//面值
    static string coulor[4];//face
    static string worth[13];//suit

};
