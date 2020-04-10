#include<iostream>
using namespace std;


int main(){
int sum=0;
int r,c,a[100][100];
cout<<"Enter no. of rows and columns "<<endl;
cin>>r>>c;

for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cin>>a[i][j];
    }
}

for(int ti=0;ti<r;ti++){
    for(int tj=0;tj<c;tj++){
            for(int bi=ti;bi<r;bi++){
    for(int bj=tj;bj<c;bj++){
        for(int si=ti;si<=bi;si++){
    for(int sj=tj;sj<=bj;sj++){
            sum+=a[si][sj];

    }}}}}}
cout<<"Sum of all possible submatrices is "<<sum<<endl;

return 0;
}
