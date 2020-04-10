#include<iostream>
using namespace std;
#define ll long long


bool ispossible(ll int mid,ll int y,ll int x,ll int n,ll int m){
    return mid*x<= m+(n-mid)*y;

}

int main(){

ll int n,m,x,y;

cin>>n>>m>>x>>y;

ll int s=0,e=n,ans=0;
while(s<=e){
    int mid=(s+e)/2;
    if(ispossible(mid,y,x,n,m)){
        ans=mid;
        s=mid+1;
    }
    else{
        e=mid-1;
    }


}

cout<<ans;
return 0;}
