





//INCOMPLETE


#include<iostream>
using namespace std;

int main(){
int a[1005],b[1005],sum[1005];
int n;
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
int m;
cin>>m;
for(int i=0;i<m;i++){
    cin>>b[i];
}
int carry=0,s;
int y=n-1,x=m-1;

if(n>m){
    for(int i=n-1;i>=0;i--){
            if(x<0){
                s=a[i]+carry;
            }
        else{
        s=a[i]+b[x]+carry;}
        if(s>=10){
            sum[i]=s%10;
            carry=s/10;
        }
        else{
            sum[i]=s;
        }
    }
x--;
}
if(m>=n){
     for(int i=m-1;i>=0;i--){
            if(y<0){
                s=b[i]+carry;
                carry=0;
            }
        else{
        s=a[y]+b[i]+carry;
        carry=0;
        }
        if(s>=10){
            sum[i]=s%10;
            carry=s/10;
        }
        else{
            sum[i]=s;
        }
    }
y--;
}



for(int i=0;i<n;i++){
    cout<<sum[i]<<", ";
}


return 0;
}
