#include<iostream>
#include<climits>
using namespace std;

int main(){

int n,a[1000];
cin>>n;

for(int i=0;i<n;i++){
    cin>>a[i];
}
int largest,smallest;
largest=INT_MIN;
smallest=INT_MAX;
for(int j=0;j<n;j++){
    //largest=max(largest,a[j]);    //Simpler approach
    //smallest=min(smallest,a[j]);
    if(a[j]>largest){
            largest=a[j];

    }
    if(a[j]<smallest){
        smallest=a[j];
    }
}
cout<<"largest element found is "<<largest<<endl;
cout<<"smallest element found is "<<smallest;


return 0;
}
