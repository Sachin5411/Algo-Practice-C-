#include<iostream>
using namespace std;

int ans=-1;
int lastindex(int *a,int n,int key,int i){

    if(i==n-1){
        return ans;
    }
    if(a[i]==key){
            ans=i;
    }
    lastindex(a,n,key,i+1);
}


int main(){

int n,a[1005];

cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
int key;
cin>>key;
cout<<lastindex(a,n,key,0);
return 0;

}

