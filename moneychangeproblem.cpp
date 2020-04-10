#include<algorithm>
#include<iostream>
using namespace std;

bool compare(int a,int b){
    return a<=b;
}

int main(){

int coins[]={1,2 ,5,10,20,50,100,200,500,2000};
int money =120;
int n=sizeof(coins)/sizeof(int);
while(money!=0){
auto it = lower_bound(coins,coins+n,money,compare);
int index=it-coins;
cout<<coins[index-1]<<" + ";
money=money-coins[index-1];
}
return 0;
}
