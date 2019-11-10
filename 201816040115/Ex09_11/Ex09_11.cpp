//Ex09_11.cpp
//Using the class rectangle to calculate rectangle's perimeter and area

#include<iostream>
#include<stdexcept>
#include"Rectangle.h"

using namespace std;

int main()
{
    double len, wid;
    cout << "please input length:" << endl;
    cin >> len;
    cout << "please input width:" << endl;
    cin >> wid;
    Rectangle rectangle(len,wid);
    try
    {
        Rectangle rectangle(len,wid);
    }
    catch(invalid_argument &e)
    {
        cout << "Exception: " << e.what() << endl;
    }
    cout << "perimeter of rectangle is :" << endl;
    cout << rectangle.calculatePerimeter(rectangle.getLength(),rectangle.getWidth()) << endl;
    cout << "Area of rectangle is :" << endl;
    cout << rectangle.calculateArea(rectangle.getLength(),rectangle.getWidth()) << endl;

}
