#include<iostream>
using namespace std;


/*
How to declare a 2D array to pass into a function to make changes into that array only
cin>>n>>m;
int **arr=new int*[n];
for(int i=0;i<n;i++){
    arr[i]=new int[m];
}
*/

void submatrix(int a[][100], int r,int c){

for(int i=r-1;i>=0;i--){
    for(int j=c-2;j>=0;j--){

        a[i][j]=a[i][j]+a[i][j+1];
    }
}
for(int i=r-2;i>=0;i--){
    for(int j=c-1;j>=0;j--){

        a[i][j]=a[i][j]+a[i+1][j];
    }
}
int maximum=INT_MIN;

for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        maximum=max(maximum, a[i][j]);
    }
}
cout<< maximum;
}



int main(){
int a[100][100];
int c,r;
cout<<"Enter number of rows and columns "<<endl;
cin>>r>>c;
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cin>>a[i][j];
    }
}
submatrix(a,r,c);
//cout<<maximum<<endl;
return 0;}
