#include <iostream>
#include "Rectangle.h"
#include <stdexcept>
using namespace std;

int main()
{
    int flag = 0;//Determine if the catch function is successful.If it is successful ,the value of flag will turn to 1
    double l ,w ; // Users define their own length and width
    cout << "Please enter the length and width about rectangle : "<<endl;
    cin >> l;
    cin >> w;
    Rectangle rec;
    cout << "Your length and your width : " << "length = " << l << "  " << "width = " << w <<endl;
    try // Test the data
    {
        rec.setPerimeter(l,w);
        rec.setArea(l,w);
    }

    catch(invalid_argument &e)
    {
        cout<<"Exception : "<<e.what()<<endl;
        flag = 1; // The data is wrong
    }

    if (flag == 0) // The data is correct,then output result
    {
        rec.setPerimeter(l,w);
        rec.setArea(l,w);
        cout<<"Perimeter : "<<rec.getPerimeter()<<"   "<<"Area : "<<rec.getArea()<<endl;
    }
    return 0;
}
