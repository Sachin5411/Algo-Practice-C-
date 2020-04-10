#include<iostream>
using namespace std;

char integer[][100]={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };


void numberprint(int n){
    if(n==0){
        return;
    }
    numberprint(n/10);
    cout<<integer[n%10]<<" ";

}

int main(){

int n;
cin>>n;

numberprint(n);


return 0;}
