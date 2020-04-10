#include<iostream>
using namespace std;


void merger(long long int *a,long long int s,long long int e){

    long long int  i=s,j=s;
    long long int mid=(s+e)/2;
    long long int k=mid+1;
    long long int temp[200005];

    while(i<=mid && k<=e){
    if(a[i]<a[k]){
        temp[j++]=a[i++];
    }
    else{
        temp[j++]=a[k++];
    }
    }

    while(i<=mid){
        temp[j++]=a[i++];
    }
    while(j<=e){
        temp[j++]=a[k++];
    }

    for(int i=s;i<=e;i++){
        a[i]=temp[i];
    }

}

void mergesort(long long int *a,long long int s,long long int e){
if(s>=e){
    return;
}
    long long int mid=(s+e)/2;
    /*cout<<"s to mid"<<endl;
    for(int i=s;i<=mid;i++){
    cout<<a[i]<<" ";
    }
    cout<<endl;*/

    mergesort(a,s,mid);

    /*cout<<"mid+1 to e"<<endl;
    for(int i=mid+1;i<=e;i++){
    cout<<a[i]<<" ";
    }*/
    //cout<<endl;
    mergesort(a,mid+1,e);


   /* cout<<"After merge"<<endl;
    for(int i=s;i<=e;i++){
    cout<<a[i]<<" ";
    }
    cout<<endl;*/
    merger(a,s,e);

}




int main(){

long long int a[200005], n;
cin>>n;
for(long long int i=0;i<n;i++){
    cin>>a[i];
}

mergesort(a,0,n-1);

for(long long int i=0;i<n;i++){
    cout<<a[i]<<" ";
}


return 0;}
