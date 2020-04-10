#include<iostream>
using namespace std;

int firstoccurance(int a[],int n,int key){
int s=0,e=n-1;
int mid,ans=-1;
while(s<=e){
    mid=(s+e)/2;
    //cout<<mid<<endl;;
    if(a[mid]==key){
        ans=mid;
        e=mid-1;
    }
    if(a[mid]>key){
        e=mid-1;
    }
    else{
        s=mid+1;
    }

}


return ans;
}


int main(){
int n,a[1005];
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
int key;
cin>>key;
cout<<firstoccurance(a,n,key);




return 0;}
