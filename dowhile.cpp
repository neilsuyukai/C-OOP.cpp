#include <iostream>
using namespace std;

int main(){
    int x,y,sum;
    cin>>x>>y;
    do{
        if(x%2==0||x%5==0)
            sum=sum+x;
            x++;
    }while(x<=y);
    cout<<sum;
    return 0;
}