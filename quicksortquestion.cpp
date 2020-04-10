#include<iostream>
using namespace std;
#define ll long long
#include<ctime>
#include<bits/stdc++.h>

void shuffle(ll int *a,ll int e){
    srand(time(NULL));
    ll int i,j,temp;

    for(ll int i=e;i>=0;i--){
        j=rand()%(i+1);
        swap(a[i],a[j]);
    }

}

ll int parti(ll int *a,ll int s,ll int e){
    ll int pivot=a[e],i=s-1,j=s;
    while(j<e){
        if(a[j]<=pivot){
            i++;

            swap(a[i],a[j]);
            }
            j++;
        }
        //i++;

    swap(a[i+1],a[e]);
    return i+1;

}

void quicksort(ll int *a,ll int s,ll int e){

    if(s>=e){
        return;
    }
    //int mid=(s+e)/2;
    ll int p=parti(a,s,e);
    //cout<<"p is "<<p<<endl;

    quicksort(a,s,p-1);

    quicksort(a,p+1,e);

}



int main(){
ll int a[200005],n;
cin>>n;
for(ll int i=0;i<n;i++){
    cin>>a[i];
}

shuffle(a,n-1);
quicksort(a,0,n-1);


for(ll int i=0;i<n;i++){
    cout<<a[i]<<" ";
}


return 0;
}
