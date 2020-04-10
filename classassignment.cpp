#include<iostream>
using namespace std;


//long long ans=0;
int countintegers(int n){
    if(n==1){
        return 2;
    }
    if(n==2){
        return 3;
    }
    return countintegers(n-1) + countintegers(n-2);
}



int main(){

//char a[1005];
int t;
cin>>t;
int n;
for(int i=0;i<t;i++){

cin>>n;
cout<<"#"<<i+1<<" : "<<countintegers(n)<<endl;
}



return 0;}
