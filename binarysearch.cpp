#include<iostream>
using namespace std;
#define ll long long

int binary(ll int *a,ll int n,int key){
ll int s=0,e=n-1;
ll int mid;
while(s<=e){
    mid=(s+e)/2;
    if(a[mid]==key){
        return mid;
    }
    if(a[mid]>key){
        e=mid-1;
    }
    if(a[mid]<key){
        s=mid+1;
    }
}
return -1;
}


int main(){
 long long int n,a[100000000];
 cout<<"Enter number of elements "<<endl;
 cin>>n;
 cout<<"Enter a sorted array ";
 for(ll int i=0;i<n;i++){

    cin>>a[i];
 }
 int key;
 cout<<"Enter key to search "<<endl;
 cin>>key;
 ll int index=binary(a,n,key);
 if(index==-1){
    cout<<"Key not found "<<endl;
 }
 else{
 cout<<"key found at index "<<index<<endl;}


return 0;
}
