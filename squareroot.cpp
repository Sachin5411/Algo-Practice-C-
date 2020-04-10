#include<iostream>
using namespace std;


float squareroot(int n,int p){

    int s=0,e=n;
    float ans;
    while(s<=e){
        int mid=(s+e)/2;
        if(mid*mid==n){
            ans=mid;
            break;
        }
        if(mid*mid<n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }

    }
    float incr=0.1;
    for(int i=0;i<p;i++){
        while(ans*ans<=n){
            ans+=incr;
        }
        ans=ans-incr;
        incr=incr/10;
    }


return ans;
}



int main(){

//int n,p;
//cin>>n>>p;


cout<<squareroot(10,2)<<endl;
cout<<squareroot(9,1)<<endl;



}

