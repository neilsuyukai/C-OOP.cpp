#include <iostream>
#include "Rectangle.h"
using namespace std;

int main ()
{
double num1,num2,num3,num4;
cin>>num1 >> num2>> num3>> num4;
Rectangle myRectangle1;
myRectangle1.setLength(num1);
myRectangle1.setWidth(num2);
myRectangle1.displayStatistics();

Rectangle myRectangle2;
myRectangle2.setLength(num3);
myRectangle2.setWidth(num4);
myRectangle2.displayStatistics();


//cout <<"Displaying the statistics of unit rectangle :"<<endl;

//unitRectangle.displayStatistics ();

//cout <<endl<<"Now displaying the statistics of myRectangle :"<<endl;
Rectangle myRectangle(5.0,2.5);
myRectangle.displayStatistics ();

//cout <<endl;
//cout <<"Enter the length and width of a rectangle followed by space:";
return 0;
}