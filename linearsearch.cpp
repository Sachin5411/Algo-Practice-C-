#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int a[n];
for (int i=0;i<n;i++){
    cin>>a[i];
}
int key,i;
cout<<"Enter key to search ";
cin>>key;
for(i=0;i<=n-1;i++){
    if(a[i]==key){
    cout<<"Key found at index "<<i<<endl;
    break;
    }
}
if(i==n){
    cout<<" key not found"<<endl;
}

return 0;
}
