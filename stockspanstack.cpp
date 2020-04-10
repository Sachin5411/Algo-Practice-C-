#include<iostream>
using namespace std;
#include<stack>



int stockspan(int a[],int n){
int newarr[1005];
stack<int> s;
for(int i=0;i<n;i++){

    int current=a[i];
    while(s.empty()==false && a[s.top()]<current){
        s.pop();
    }
    if(s.empty()){
        newarr[i]=0;
        //int greaterprice=0;
        //cout<<greaterprice<<" ";
    }
    else{
        int greaterprice=i-s.top();
        newarr[i]=greaterprice;
        //cout<<greaterprice<<" ";

    }


    s.push(i);
}
for(int i=0;i<n;i++){
    cout<<newarr[i]<<" ";
}
}









int main(){

int a[1005],n;

cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
stockspan(a,n);


return 0;}
