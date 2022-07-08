#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    char name[55];
    double bmi,weight,high;
    cin>>name>>bmi>>weight>>high;
    bmi=weight/(high*high);
    cout<<name<<setprecision(2)<<fixed<<bmi;
    return 0;
}