#include<iostream >
using namespace std;

void subarray(int *a, int n){
    int cs[100];
    cs[0]=a[0];
    cs[-1]=0;

for(int i=1;i<n;i++){
    cs[i]=cs[i-1]+a[i];
}
int csum=0;
int maxsum=INT_MIN;
int leftmost=-1,rightmost=-1;
for (int i=0;i<n;i++){
    for (int j=i;j<n;j++){
            csum=0;
    /*if(i==0){
        csum=cs[j];
    }*/
    //else{
        csum=cs[j]-cs[i-1];//}
        if(maxsum< csum){
            maxsum=csum;
            leftmost=i;
            rightmost=j;
    }
}}
for (int i=leftmost;i<=rightmost;i++){
    cout<<a[i]<<" ";
}
cout<<endl<<"Max subarray sum is "<<maxsum;
}


int main(){

int a[1000],n,test;

        cin>>n;
for (int i=0;i<n;i++){
    cin>>a[i];
}

subarray(a,n);

return 0;
}
