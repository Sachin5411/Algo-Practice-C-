#include<bits/stdc++.h>
using namespace std;

int swapping(int *a,int n){

int cs=0;

int ms=0;
int j=0;
for(int i=1;i<n;i++){

    //cout<<a[i]<<" "<<a[j]<<endl;
    if(a[i]<a[j]){
        swap(a[i],a[j]);
        cs=a[i]-a[j];
        cs=abs(cs);
        //cout<<"cs is "<<cs<<endl;
    }
    if(cs>ms){
        ms=cs;
    }
    j++;
}
return ms;
}

int main(){

int n,a[1005];
int t;
cin>>t;
while(t>0){
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
cout<<swapping(a,n)<<endl;
t--;}
return 0;
}
