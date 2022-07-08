#include <iostream>
#include <iomanip>
#include <string>
#include "Score.h"
using namespace std;

Score::Score()
{
    string name;
    int math;
}
Score::Score(string name1,int math1)
{
    name=name1;
    math=math1;
}
string Score::getName()
{
    return name;
}
int Score::getMath()
{
    return math;
}
void Score::setName(string name1)
{
    name=name1;
}
void Score::setMath(int math1)
{
    math=math1;
}