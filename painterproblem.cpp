#include<iostream>
#include<algorithm>
using namespace std;
#define ll long


// test cases not passed on submitting
int minpainterrequired(long long int mid,ll int *a,ll int n){
    ll int time=0,painter=1;

            for(int i=0;i<n;i++){
                    time+=a[i];
                    if(time>mid){
                            painter++;
                            i--;

                    time=0;
                    }

                }
    //cout<<"painter "<<painter<<endl;
    return painter;
}








int painter(ll int *a,long long int sum,ll int n,ll int p,ll int k){

    ll int s=a[n-1];
	long long int e=sum,ans=0;
    while(s<=e){

        ll int mid=(s+e)/2;
        if(minpainterrequired(mid,a,n)==p){
            ans=mid;
            //cout<<ans<<" ";
            e=mid-1;
        }
    else{
        s=mid+1;
    }
    }

return ans*k;

}





int main(){

ll int n,p,k,a[100005];
long long int sum=0;
cin>>n>>p>>k;


for(ll int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
}


//sort(a,a+n);
cout<<painter(a,sum,n,p,k);




return 0;}
