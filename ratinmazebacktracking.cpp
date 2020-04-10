#include<iostream>
using namespace std;

bool ratinmaze(char a[105][105],int n,int m,int i,int j,int out[][105]){
    if(i==n && j==m){
            out[i-1][j-1]=1;
        for(int x=0;x<=n;x++){
            for(int y=0;y<=n;y++){
                cout<<out[i][j]<<" ";
            }
            cout<<endl;
        }
        return true;
    }
    if(i>n || j>m){
        return false;
    }
    if(a[i][j]=='X'){
        return false;
    }

    out[i][j]=1;
    bool downside=ratinmaze(a,n,m,i+1,j,out);
    bool rightside=ratinmaze(a,n,m,i,j+1,out);
    out[i][j]=0;
    if(downside||rightside){
        return true;
    }
    return false;
}

int main(){
int n,m ;
cin>>n>>m;
char a[105][105];
int out[105][105]={0};

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>a[i][j];
    }
}
ratinmaze(a,n-1,m-1,0,0,out);

return 0;}
