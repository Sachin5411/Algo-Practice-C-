#include<iostream>
#include<climits>
using namespace std;

void selectionsort(int *a,int n){
for(int i=0;i<n-1;i++){
        int min_index=i;
    for(int j=i+1;j<n;j++){
        if(a[j]<a[min_index]){
            min_index=j;
        }}
    swap(a[i],a[min_index]);
    }

for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
}


int main(){

int n,a[1000];
cin>>n;
for(int i =0;i<n;i++){
    cin>>a[i];
}


selectionsort(a,n);

return 0;
}
