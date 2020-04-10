#include<iostream>
using namespace std;

int main(){

int n,m;
cin>>n>>m;

int ans=1;

while(m>0){
    if(m&1==1){
        ans=ans*n;
    }
    n=n*n;
    m=m>>1;
}
cout<<ans;




return 0;
}
