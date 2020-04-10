#include<iostream>
using namespace std;

//1 case passed

long long int pcounter=0;
void coingame(long long int *a,int n,int i){
    if(i>=n){
            return;
    }

    if(a[n]>a[i]){
        pcounter+=a[n];
        n--;
        if(a[n]>a[i]){
            coingame(a,n-1,i);
        }
        else{
            coingame(a,n,i+1);
        }}
    else{
        pcounter+=a[i];
        i++;
        if(a[n]>a[i]){
            coingame(a,n-1,i);
        }
        else{
            coingame(a,n,i+1);
        }
        //coingame(a,n,i+1);
    }

    }

int main(){
int n;
long long int a[1005];
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}

coingame(a,n-1,0);
cout<<pcounter;


return 0;}
