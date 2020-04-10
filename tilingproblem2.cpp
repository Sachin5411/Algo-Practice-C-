#include<iostream>
using namespace std;


//TLE , solve using DP (1 case passed)

int tilingz(int n,int m){

    if(n==1){
        return 1;
    }
    if(n==m){
       return 2;
    }
    if(n<=0 || m<=0){
        return 0;
    }
    return tilingz(n-1,m)+tilingz(n-m,m);

}

int main(){
int t,n,m;
cin>>t;
while(t--){
cin>>n>>m;
cout<<tilingz(n,m)<<endl;
}
}
