#include<iostream>
using namespace std;

void merger(int *a, int s,int e){
    int mid=(s+e)/2;
    int i=s;
    int j=mid+1;
    int k=s;

    int temp[10005];
    while(i<=mid && j<=e)
{   if(a[i]<a[j]){
    temp[k++]=a[i++];
}
    else{
        temp[k++]=a[j++];
    }
}
while(j<=e){
    temp[k++]=a[j++];
}
while(i<=mid){
    temp[k++]=a[i++];
}
    for(int i=s;i<=e;i++){
        a[i]=temp[i];
    }
}



void mergesort(int *a, int s, int e){

    if(s>=e){
        return ;
    }
    int mid=(s+e)/2;
    mergesort(a,s,mid);
    mergesort(a,mid+1,e);

    merger(a,s,e);

}




int main(){

int a[1005];
int n;
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}


mergesort(a,0,n-1);

for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}

return 0;
}
