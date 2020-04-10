#include<iostream>
using namespace std;

void insertionsort(int *a,int n){
    int j=0;
for(int i=1;i<n;i++){
    int temp=a[i];
    j=i-1;
    while(j>=0 && a[j]>temp){
        a[j+1]=a[j];
    j--;
    }
    a[j+1]=temp;


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


insertionsort(a,n);

return 0;
}
