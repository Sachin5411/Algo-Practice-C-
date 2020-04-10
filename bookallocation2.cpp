#include<iostream>
using namespace std;


bool ispossible(int *a,long long int mid,int n,int m){

    int student=1;
    long long int pages=0;
    for(int i=0;i<n;i++){

        if(pages+a[i]>mid){
            student++;
        }
        if(student>m){
        return false;}

        pages+=a[i];

    }
    return true;
}






int bookallocation(int *a,int n,int m,int sum){

    long long int s=0,e=sum,mid,finalans=0;
    while(s<=e){
        mid=(s+e)/2;

        if(ispossible(a,mid,n,m)){
                finalans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }

return finalans;
}







int main(){
int a[1005];
int n,m,t;
cin>>t;
while(t>0){
cin>>n>>m;

long long int sum=0;
for(int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
}

cout<<bookallocation(a,n,m,sum)<<endl;
t--;
}

return 0;}
