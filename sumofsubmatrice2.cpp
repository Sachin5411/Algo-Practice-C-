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

//cs[0][0]=a[0][0];
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
    if((j-1)==-1){
        cs[i][j]=a[i][j];
    }
    else{
      cs[i][j]=a[i][j]+cs[i][j-1];
    }
}}

for(int i=1;i<r;i++){
    for(int j=0;j<c;j++){
    if((i-1)==-1){
        cs[i][j]=cs[i][j];
    }
    else{
      cs[i][j]=cs[i][j]+cs[i-1][j];
    }
}}

for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cout<<cs[i][j]<<" ";

    }
    cout<<endl;
}
int sum=0;
for(int ti=0;ti<r;ti++){
    for(int tj=0;tj<c;tj++){
        for(int bi=ti;bi<r;bi++){
            for(int bj=tj;bj<c;bj++){
                sum+=cs[bi][bj]-cs[ti-1][bj]-cs[bi][tj-1]+cs[ti-1][tj-1];
            }
        }
    }
}
cout<<"Sum of all submatrices is "<<sum<<endl;

return 0;
}
