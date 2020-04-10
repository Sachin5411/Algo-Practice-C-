#include<iostream >
using namespace std;

void subarray(int *a, int n){
int csum=0;
int maxsum=0;
int leftmost=-1,rightmost=-1;
for (int i=0;i<n;i++){
    for (int j=i;j<n;j++){
            csum=0;
        for(int k=i;k<=j;k++){
            csum+=a[k];
        }
        if(maxsum< csum){

            maxsum=csum;
            leftmost=i;
            rightmost=j;
        }
    }

}
for (int i=leftmost;i<=rightmost;i++){
    cout<<a[i]<<" ";
}
cout<<endl<<"Max subarray sum is "<<maxsum;
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
