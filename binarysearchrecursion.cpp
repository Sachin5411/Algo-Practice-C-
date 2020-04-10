#include<iostream>
using namespace std;

int binarysearch(int a[],int s,int e,int key){

    int mid=(s+e)/2;

    if(s>e){
        return -1;
    }
    if(a[mid]==key){
        return mid;
    }
    if(a[mid]>key){
        return binarysearch(a,s,mid-1,key);
    }
    if(a[mid]<key){
        return binarysearch(a,mid+1,e,key);
    }

}


int main(){

int n,a[1005];
cin>>n;

for(int i=0;i<n;i++){
    cin>>a[i];
}
int key;
cin>>key;
cout<<binarysearch(a,0,n-1,key);

return 0;}
