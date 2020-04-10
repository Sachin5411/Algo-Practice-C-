#include<iostream>
using namespace std;

int primesieve(int *p,int n){

    for(int i=3;i<=n;i+=2){
        p[i]=1;
    }
    for(int i=3;i<=n;i+=2){
        if(p[i]==1){
            for(int j=i*i;j<=n;j+=i){
                p[j]=0;
            }
        }
    }
    p[0]=p[1]=0;
    p[2]=1;

}

int main(){
long long int a[5000005]={0};
int t,x,y;
long long int cs[5000005];
cin>>t;
primesieve(a,5000005);
cs[0]=a[0];
for(int i=1;i<5000005;i++){
    cs[i]=cs[i-1]+a[i];
}

while(t>0){
    cin>>x>>y;
    int s=cs[y]-cs[x-1];
    cout<<s<<endl;
    t--;

}


return 0;
}
