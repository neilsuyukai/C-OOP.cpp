#include <iostream>
#include <iomanip>
#include <string>
#include "BMI1.h"
using namespace std;

int main()
{
    string n;
    double w,h;
    BMI bmi;
    cin>>n>>w>>h;
    bmi.setName(n);
    bmi.setWeight(w);
    bmi.setHeight(h);
	cout<<setprecision(2)<<fixed<<bmi.getName()<<" "<<bmi.getBMI()<<endl;
	
	return 0;
}