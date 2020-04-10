#include<iostream>
using namespace std;

int decimaltobinary(int n){


int ans=0;
int p=1;
int i;
while(n>0){
    i=n&1;
    ans+=i*p;
    p=p*10;
    n=n>>1;

}
return ans;

}

int main(){
int n;
cin>>n;
cout<<decimaltobinary(n);

return 0;
}
