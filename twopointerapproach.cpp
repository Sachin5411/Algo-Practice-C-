#include<iostream>
using namespace std;

int main(){

int first , last;
int n, a[1000];
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];

}
first=0;
last=n-1;
int k;
cin>>k;
while(first!=last){

    if(a[first]+a[last]==k){
        cout<<"Pair found is "<<a[first]<<" ,"<<a[last]<<endl;
        first++;
        last--;
    }
    if(a[first]+a[last]<k){
        first++;
    }

    if(a[first]+a[last]>k){
        last--;
    }
}



return 0;
}
