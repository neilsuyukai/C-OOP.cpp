#include <iostream>
using namespace std;
int main(){
    int N;
    int h,m,s;

    cin>>N;
    h=N/3600;
    N=N%3600;

    m=N/60;
    N=N%60;

    s=N;
    cout<<h<<"hr"<<m<<"min"<<s<<"sec"<<endl;
    return 0;
}