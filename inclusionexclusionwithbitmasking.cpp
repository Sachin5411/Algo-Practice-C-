#include<iostream>

#define ll long long

using namespace std;


ll product(int a[], int i){
    int counter=0;
    ll p=1;
    while(i>0){
        int j=i&1;
        if(j==1){
            p=p*a[counter];
        }
        counter++;
        i=i>>1;
    }
    return p;
}


ll Inclusionexclusionsub(int a[],int n,int s){
    int finalans=0;
    //int s=sizeof(a)/sizeof(int);
    //cout<<s<<endl;
    for(ll i=1;i<(1<<s);i++){

        ll p=product(a,i);
        ll setbits=__builtin_popcount(i);
        //cout<<p<<endl;
        if(setbits&1){
            finalans+=n/p;
        }
        else{
            finalans-=n/p;
        }
    }


return finalans;
}



int main(){

int n;
cin>>n;
int primes[]={2,3,5,7,11,13,17,19};
int s=sizeof(primes)/sizeof(int);
cout<<Inclusionexclusionsub(primes,n,s);


return 0;
}
