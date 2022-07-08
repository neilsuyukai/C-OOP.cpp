#ifndef SCORE_H
#define SCORE_H
#include <iostream>
#include <string>

using namespace std;
class Score
{
    public:
    Score();
    Score(string name1,int math1); 
    string name1();
    string name2();
    string name;
    int math;
    int math1;
    int math2;
    int score1;
    int score2;
    void setName(string name1);
    void setMath(int math1);
    string getName();
    int getMath();

};
#endif