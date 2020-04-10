#include<iostream>
using namespace std;


int lower(int a[],int n,int key){

    int s=0,e=n,mid,ans=-1;
    while(s<=e){
        mid=(s+e)/2;
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

int upper(int a[],int n,int key){

    int s=0,e=n,mid,ans=-1;
    while(s<=e){
        mid=(s+e)/2;
        if(a[mid]==key){
            ans=mid;
            s=mid+1;
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
int n,a[10004];
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
int q;
cin>>q;
while(q>0){
        int key;
cin>>key;
    cout<<lower(a,n,key)<<" "<< upper(a,n,key)<<endl;
q--;
}



return 0;}
