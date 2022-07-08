#ifndef BMI1_H
#define BMI1_H
#include <iostream>
#include <string>
using namespace std;
class BMI
{
    private:
    string name;
    double weight;
    double height;
    
    public:
    void setWeight(double newWeight);
    void setHeight(double newHeight);
    string setName();
    void setName(string newName);
    string getName();
    
    double getBMI();
};
#endif