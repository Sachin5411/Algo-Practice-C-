#include<iostream>
using namespace std;

int countbits(int n){

int counter=0;
while(n>0){
 int i=n&1;
 if(i==1){
 counter++;
 }
 n=n>>1;
}
return counter;
}


//Second method
int countbitsfast(int n){
int ans=0;
while(n>0){
    n=n&(n-1);
    ans++;
}
return ans;

}


int main(){

int n;
cin>>n;

cout<<countbits(n)<<endl;
cout<<countbitsfast(n);


return 0;
}
