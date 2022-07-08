#include <iostream>
#include <iomanip>
#include <string>
#include "Rectangle.h"
#include "Shape.h"
#include "Triangle.h"
using namespace std;
int main()
{
    double a1,a2;
    int a3;
    string s1,s2;
    cin>>a1>>a2>>s1>>a3>>s2;
    Triangle t1(a1,a2,s1);
    Rectangle r1(a3,s2);
    cout<<fixed<<setprecision(1)<<"Triangle"<<"\n"<<"base:"<<t1.getBase()<<" height:"<<t1.getHeight()<<" area:"<<t1.getArea()<<" color:"<<t1.getColor()<<endl;
    cout<<fixed<<setprecision(1)<<"Rectangle"<<"\n"<<"edge:"<<r1.getEdge()<<" area:"<<r1.getArea()<<" color:"<<r1.getColor()<<endl;
    return 0;
}