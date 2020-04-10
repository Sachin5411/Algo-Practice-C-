#include<iostream>
using namespace std;
//spiral print

void waveprint(int a[100][100], int r , int c){
    int sr=0;
    int sc=0;
    int er=r-1;
    int ec=c-1;
    while(sr<=er && sc<=ec){
        for(int i=sc;i<=ec;i++){
            cout<<a[sr][i]<<" ";
        }
        sr++;
        for(int j=sr;j<=er;j++){
            cout<<a[j][ec]<<" ";
        }
        ec--;
        if(sr<er){
        for(int k=ec;k>=sc;k--){
            cout<<a[er][k]<<" ";
        }
        er--;}
        if(ec>sc){
        for(int s=er;s>=sr;s--){
            cout<<a[s][sc]<<" ";
        }
        sc++;
    }}
}


int main(){
int c,r,a[100][100];

cin>>r>>c;
for(int i=0;i<r;i++){
for(int j=0;j<c;j++)
{
cin>>a[i][j];
}}

waveprint(a,r,c);
return 0;}
