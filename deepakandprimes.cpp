#include<iostream>
using namespace std;

void primesieve(long long int *p,long long int n){

    for(long long int i=3;i<=n;i+=2){
        p[i]=1;
    }
    for(long long int i=3;i<=n;i+=2){
        if(p[i]==1){
            for(long long int j=i*i;j<=n;j+=i){
                p[j]=0;
            }
        }
    }
    p[0]=p[1]=0;
    p[2]=1;

}

int main(){
long long int a[5000005]={0};
long long int n;
//long long int cs[5000005];

primesieve(a,5000005);
cin>>n;
for(int i=0;i<=5000005;i++){
    if(a[i]==1){
        n--;
    if(n==0){
            cout<<i;
            break;
    }
}}
return 0;
}
