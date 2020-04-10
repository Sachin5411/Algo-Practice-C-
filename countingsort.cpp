#include<iostream>
using namespace std;


int main(){

long long int n,a[1000005];
cin>>n;
for(long long int i=0;i<n;i++){
    cin>>a[i];
}
long long int f[1000005]={0};
int m=sizeof(f)/sizeof(long long int);
for(long long int i=0;i<n;i++){
    int s=a[i];
    f[s]+=1;

}
for(long long int i=0;i<m;i++){
    while(f[i]>0){
        cout<<i<<", ";
        f[i]-=1;
    }
}

return 0;
}
