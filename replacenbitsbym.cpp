#include<iostream>
using namespace std;

int replacenbitsbym(int n,int m,int i,int j){
    int a=(~0)<<(j+1);
    int b=(1<<i)-1;
    int mask1=a|b;
    n=n&mask1;
    int mask2=m<<i;
    n=n|mask2;
    return n;

}




int main(){

int n,m,i,j;

cout<<replacenbitsbym(15,2,1,3);

return 0;
}
