#include<iostream>
#include<math.h>
using namespace std;



int main(){

    long long int n;
    int k,t;
    cin>>t;
    while(t>0){
            long long int ans=0;
    cin>>n>>k;

    long long int s=1,e=n;
    while(s<=e){
        long long int mid=(s+e)/2;
        long long int x=pow(mid,k);
        if(x==n){
            ans=mid;
            break;
        }
        if(x>n){
            e=mid-1;
        }
        if(x<n){
            ans=mid;
            s=mid+1;
        }
    }

    cout<<ans<<endl;
    t--;
    }
    return 0;
}
