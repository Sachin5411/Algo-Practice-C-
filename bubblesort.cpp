#include<iostream>
using namespace std;

void bubblesort(int *a,int n){
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }

    }
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
bubblesort(a,n);



return 0;
}
