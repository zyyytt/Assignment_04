#include "Rectangle.h"
#include <stdexcept>
#include <iomanip>
#include <iostream>
using namespace std;
/*Call two set function in constructor*/
Rectangle::Rectangle(double lengthless,double widthness)
{
    setPerimeter(lengthless,widthness);
    setArea(lengthless,widthness);
}

void Rectangle::setPerimeter(double lengthless,double widthness)
{
    if(( lengthless < 0.0 || lengthless > 20.0 )&&(widthness < 0.0 || widthness > 20.0))
        throw invalid_argument("length and width must be 0-20");//Determine if the length and the width meets the range
    else if( lengthless < 0.0 || lengthless > 20.0 )  //Determine if the length meets the range
        throw invalid_argument("length must be 0-20");
    else if (widthness < 0.0 || widthness > 20.0)  //Determine if the width meets the range
        throw invalid_argument("width must be 0-20");

    else //Calculate the perimeter
        perimeter = ( lengthless + widthness ) * 2;

}

void Rectangle::setArea(double leng,double wid)
{
    if(( leng < 0.0 || leng > 20.0 )&&(wid < 0.0 || wid > 20.0))
        throw invalid_argument("length and width must be 0-20");//Determine if the length and the width meets the range
    else if( leng < 0.0 || leng > 20.0 )  //Determine if the length meets the range
        throw invalid_argument("length must be 0-20");
    else if (wid < 0.0 || wid > 20.0)  //Determine if the width meets the range
        throw invalid_argument("width must be 0-20");
    else  //Calculate the area
        area = leng * wid;
}

double Rectangle::getPerimeter()
{
    return perimeter;
}

double Rectangle::getArea()
{
    return area;
}
