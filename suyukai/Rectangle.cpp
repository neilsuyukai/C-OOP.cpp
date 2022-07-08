#include <iostream>
#include <iomanip>
#include "Rectangle.h"
using namespace std;
Rectangle::Rectangle ()
{
length =1.0;
width = 1.0;
}

Rectangle::Rectangle (double len, double wid)
{
length = len;
width = wid;
}

void Rectangle::setLength (double l)
{
length = l;
}
void Rectangle::setWidth (double w)
{
width = w;
}
double Rectangle::getLength () const
{
return length;
}
double Rectangle::getWidth () const
{
return width;
}
double Rectangle::getArea () const
{
return (length*width);
}
double Rectangle::getPerimeter () const
{
return (2*(length+width));
}
void Rectangle::displayStatistics () const
{
cout <<setprecision(2)<<fixed<<getArea ()<<" "<<getPerimeter ()<<endl;

}