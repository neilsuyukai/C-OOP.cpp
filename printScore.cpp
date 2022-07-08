#include <iostream>
#include <iomanip>
#include <string>
#include "Score.h"
using namespace std;

int main()
{
	string a;
	int b;
	cin>>a>>b;
	Score score1("John",90);
	Score score2("Mary",80);
	score1.setName(a);
	score2.setMath(b);
	score1.print();
	score2.print();
	return 0;
}