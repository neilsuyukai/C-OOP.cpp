#include "printScore.h"
#include <string>
#include <iostream>
using namespace std;
Score::Score(string a,int b)
{
    name=a;
    math=b;
}
string Score::getName()
{
    return name;
}
int Score::getMath()
{
    return math;
}
void Score::setName(string a)
{
    name=a;
}
void Score::setMath(int a)
{
    math=a;
}
void Score::print()
{
    cout<<name<<" "<<math<<endl;
}