#include<iostream>
#include<algorithm>
using namespace std;


int main(){
 int n,key,a[1005];

 cin>>n;
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
 cin>>key;
 sort(a,a+n);
int p1,p2;
for(int i=0;i<n-2;i++){
        int x=a[i];
p1=i+1;
p2=n-1;
while(p1<p2){
    if(a[p1]+a[p2]+x==key){
        cout<<x<<", "<<a[p1]<<" and "<<a[p2]<<endl;
        p1++;
        p2--;
    }
    if(a[p1]+a[p2]+x>key){
        p2--;
    }
    if(a[p1]+a[p2]+x<key){
        p1++;
    }
}
}

return 0;//
}
