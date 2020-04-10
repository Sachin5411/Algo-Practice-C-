#include<iostream>
using namespace std;


int main(){

int n,a[1000];
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
int maximum=INT_MIN;
for(int i=0;i<n;i++){
    if(a[i]>maximum){
        maximum=a[i];
    }
}

cout<<maximum;


return 0;
}
