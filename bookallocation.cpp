#include<iostream>
#define ll long long int
using namespace std;

bool isvalid(int books[],int n,int k,ll mid){
    int student=1,pages=0;
    for(int i=0;i<n;i++){
        if((pages+books[i])>mid){
            student++;
        }
        if(student>k){
            return false;
        }
        else{
            pages+=books[i];
        }
    }

return true;
}

void bookallocation(int books[],int n,int k){

    int s=0,e,totalpages=0,finalans=0;
    for(int i=0;i<n;i++){
        totalpages+=books[i];
    }
    e=totalpages;
    while(s<=e){
        int mid = (s+e)/2;
        if(isvalid(books,n,k,mid)){
            finalans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }

cout<<finalans<<endl;

}


int main(){

int n,k,test;
cin>>test;
int books[1005];
while(test>0){
cin>>n>>k;
for(int i=0;i<n;i++){
    cin>>books[i];
}

bookallocation(books,n,k);
test--;
}
return 0;
}
