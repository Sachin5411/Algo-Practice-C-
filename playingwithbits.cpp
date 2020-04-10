#include<iostream>
using namespace std;

int countsetbits(int n){
    int counter=0;
    while(n>0){
        if(n&1==1){
            counter++;
        }
        n=n>>1;
    }
    return counter;

}


int main(){

int t,n,m;
cin>>t;
while(t>0){
    cin>>n>>m;
    int ans=0;
    for(int i=n;i<=m;i++)
    {
        int s=countsetbits(i);
        ans+=s;
    }

}
cout<<ans;


return 0;
}
