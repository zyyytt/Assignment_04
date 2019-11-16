#include <iostream>
using namespace std;
#include<stdexcept>
#include"Rectangle.h"
using namespace std;

int main()
{
   Rectangle rectangle(2,3);
   cout<<"perimeter is "<<rectangle.perimeter();
    cout<<"\narea is "<<rectangle.area();
}
