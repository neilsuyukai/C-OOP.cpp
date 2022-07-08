#include <iostream>
#include <iomanip>

double BMI(double,double);
using namespace std;
int main(){
    char name[55];
    double weight,high;
    cin>>name>>weight>>high;
    cout<<name<<setprecision(2)<<fixed<<BMI(weight,high);
    return 0;
}
double BMI(double weight,double high){
    double bmi;
    bmi=weight/(high*high);
    return bmi;
}