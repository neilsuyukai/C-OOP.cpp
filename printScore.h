#ifndef SCORE_H
#define SCORE_H

#include <iostream>
#include <string>
using namespace std;
class Score
{
    private:
        string name;
        int math;
    
    public:
        Score(string,int);
        string getName();
        int getMath();
        void setName(string);
        void setMath(int);
        void print();
};
#endif