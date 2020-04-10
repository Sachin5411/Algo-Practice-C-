#include<iostream>
#define ll long int
using namespace std;

// 1 case passed ,other showing TLE

bool bitonic(ll a[],ll x,ll y){

    ll i;
    for(i=x+1;i<=y;i++){
        if(a[i]>a[i-1]){
            continue;
        }
        else {
            break;
        }
    }
    if(i==y){
        return true;
    }
    for(ll j=i+1;j<=y;j++){
        if(a[j]<a[j-1]){
            continue;
        }
        else {
            return false;
        }
    }
return true;
}





int main(){

ll a[1000005];
ll n;
int t;
cin>>t;
while(t>0){
cin>>n;
//int left=-1,right=-1;
for(ll i=0;i<n;i++){
    cin>>a[i];
}
int maxlen=0;
for(ll i=0;i<n;i++){
    for(ll j=i;j<n;j++){
        for(ll k=i;k<=j;k++){
            //cout<<a[k]<<" ";
            int l=j-i+1;
            if(bitonic(a,i,j)){
                if(l>maxlen){
                    maxlen=l;
                }
            }
        }

    }
}
cout<<maxlen<<endl;
t--;
}


return 0;
}
