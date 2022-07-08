#ifndef Triangle_H
#define Triangle_H
#include "Shape.h"
#include <string>
using namespace std;
class Triangle : public Shape
{
    private:
    double base,height;
    public:
    Triangle();
    Triangle(double,double,const string& color);
    void setBase(double);
    double getBase()const;
    void setHeight(double);
    double getHeight()const;
    double getArea();
};
#endif