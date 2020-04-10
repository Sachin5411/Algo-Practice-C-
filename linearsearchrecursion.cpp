#include<iostream>
using namespace std;


int linearsearch(int a[],int n,int i,int key)
{

    if(i==n){
        return -1;
    }
    if(a[i]==key){
        return i;
    }
    return linearsearch(a,n,i+1,key);
}




int main(){
int n,a[1005];
cin>>n;

for(int i=0;i<n;i++){
    cin>>a[i];
}
int key;
cin>>key;
cout<<linearsearch(a,n,0,key);

}
