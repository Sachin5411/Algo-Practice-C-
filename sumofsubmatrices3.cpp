#include<iostream>
using namespace std;


int main(){
int a[100][100],cs[100][100];
int c,r;
cout<<"Enter number of rows and columns "<<endl;
cin>>r>>c;
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cin>>a[i][j];
    }
}
int sum=0;
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
            int tl=((i+1)*(j+1));
            int br=((r-i)*(c-j));
        sum+=(a[i][j]*(tl*br));
    }
}
cout<<"sum is "<<sum<<endl;



return 0;}
