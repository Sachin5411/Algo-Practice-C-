#include<iostream>
using namespace std;


void clearbit(int &n,int i){
    int mask=~(1<<i);
    n=n&mask;

}



int main(){
int n,i;
n=5;
clearbit(n,2);
cout<<n;
return 0;
}
