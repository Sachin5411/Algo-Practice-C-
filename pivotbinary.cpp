#include<iostream>
using namespace std;


int main(){

int n,a[1005];
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
int mid,s=0,e=n-1;
while(s<=e){
    mid=(s+e)/2;


    if(mid>s && a[mid]<a[mid-1]){
        cout<<"Pivot element found at index "<<(mid-1);
        break;
    }
    if(mid<e && a[mid]>a[ mid+1 ]){
        cout<<"Pivot element found at "<<mid;
        break;
    }
    // else if (a[mid]<a[mid+1]  && a[mid]>a[mid-1]){
        if(a[mid]>a[e]){
            s=mid+1;
        }
        if(a[mid]<=a[s]){
            e=mid-1;
        }
   // }

}




return 0;
}
