#include<iostream>
using namespace std;


int main(){
long int n,a[1000005];
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
long int l[1000005],r[1000005];
r[n-1]=a[n-1];
for(int i=n-2;i>=0;i--){
    r[i]=max(a[i],r[i+1]);
}
l[0]=a[0];
for(int i=1;i<n;i++){
    l[i]=max(a[i],l[i-1]);
}

int water=0;
for(int i=0;i<n;i++){
    water+=(min(l[i],r[i])-a[i]);
}

cout<<water<<endl;

return 0;
}
