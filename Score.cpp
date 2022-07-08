#include <iostream>
#include <iomanip>
#include <string>
#include "Score.h"

using namespace std;

int main()
{
    
	string name1,name2;
	int math1,math2;
	
	cin>>name1>>math1>>name2>>math2;
	
	Score score1("John",90);
	Score score2("Mary",80);
	score1.setName(name1);

	
	score2.setMath(math2);
    //score1.setMath(math2);
    //score2.setMath(math1);
	
	cout<<score1.getName()<<" "<<score1.getMath()<<endl;
	cout<<score2.getName()<<" "<<score2.getMath()<<endl;
	
	return 0;
}