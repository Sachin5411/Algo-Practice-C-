#include<iostream>
using namespace std;

int power(int a, int b){
int ans=1;

while(b>0){
    int n=b&1;
    if(n==1){
        ans=ans*a;
    }
    a=a*a;
    b=b>>1;
}



return ans;
}


int main(){
int a,b;
cin>>a>>b;
cout<<power(a,b);


return 0;
}
