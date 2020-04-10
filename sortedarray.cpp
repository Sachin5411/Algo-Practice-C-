#include<iostream>
using namespace std;


bool sortedarray(long long int *a,int i,int n){

    if(i==n-1){
        return true;
    }
    if(a[i]<a[i+1]){
        sortedarray(a,i+1,n);
    }
    else{
        return false;
    }
}


int main(){

long long int a[1005];
int n;
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
if(sortedarray(a,0,n)){
    cout<<"true";
}
else{
    cout<<"false";
}
return 0;

}
