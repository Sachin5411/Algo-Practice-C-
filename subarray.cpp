#include<iostream >
using namespace std;

void subarray(int *a, int n){

for (int i=0;i<n;i++){
    for (int j=i;j<n;j++){
        for(int k=i;k<=j;k++){
            cout<<a[k]<<" ";
        }
        cout<<endl;
    }

}

}


int main(){

int a[1000],n;
cin>>n;
for (int i=0;i<n;i++){
    cin>>a[i];
}

subarray(a,n);



return 0;
}
