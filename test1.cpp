#include "BMI1.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

    void BMI::setName(string newName)
    {
        name=newName;
    }
    void BMI::setWeight(double newWeight)
    {
        weight=newWeight;
    }
    void BMI::setHeight(double newHeight)
    {
        height=newHeight;
    }
    
    string BMI::getName()
    {
        return name;
    }
    
    double BMI::getBMI()
    {
        return weight/((height/100)*(height/100));
    }