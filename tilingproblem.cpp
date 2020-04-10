#include<iostream>
using namespace std;


int tiling(int n){

if(n==1 ){
    return 1;
}
if(n==4){
    return 2;
}

if(n<=0){
    return 0;
}

int f1=tiling(n-1);
int f2=tiling(n-4);
return f1+f2;
}


int main(){
int n;
cin>>n;
cout<<tiling(n);



return 0;
}
