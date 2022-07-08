#include <iostream>
using namespace std;
int LinearComp(int number,int array[],int size);
int main(){
    int array[7]={3,5,7,2,4,8,6};;
    int x;
    cin>>x;
    cout<<LinearComp(x,array,7);
    return 0;
}
int LinearComp(int number,int array[],int size){
    int sum=0;
    for(int i=0;i<7;i++){
        if(number<array[i])
        sum=sum+array[i];
    }
    return sum;
}