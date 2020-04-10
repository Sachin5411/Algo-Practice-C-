#include<iostream>
using namespace std;


int main(){
int n;
cin>>n;
int no;
int freq[64]={0};

for(int i=0;i<n;i++){
    cin>>no;
    int k=0;
    while(no>0){
        int j=no&1;
        freq[k]+=j;
        no=no>>1;
        k++;
    }
}
int p=1,ans=0;
for(int i=0;i<64;i++){
    int a=freq[i]%3;
    //cout<<a<<endl;
    ans+=p*a;
    p=p*2;
}
cout<<ans;

return 0;
}
