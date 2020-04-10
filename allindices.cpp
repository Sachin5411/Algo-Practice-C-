#include<iostream>
using namespace std;


int allindices(int *a,int n ,int key,int i){
    if(i==n){
        return -1;
    }
    if(a[i]==key){
        cout<<i<<" ";
    }
    allindices(a,n,key,i+1);

}

int main(){
int n,a[10004];
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
int key;
cin>>key;
allindices(a,n,key,0);

return 0;}
