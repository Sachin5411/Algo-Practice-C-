#include<iostream>
using namespace std;


int main(){
int s=0;
int a[]={1,2,3,2,1,5,5};
int n=sizeof(a)/sizeof(int);
//cout<<n;
for(int i=0;i<n;i++){
    s=s^a[i];
    //cout<<s;
}
cout<<s;


return 0;
}
