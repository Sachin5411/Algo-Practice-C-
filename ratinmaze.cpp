#include<iostream>
using namespace std;

bool ratinmaze(char a[1000][1000],int n,int m,int i,int j,char out[][1000]){
    if(i==n && j==m){
            out[i][j]=1;
        for(int x=0;x<=n;x++){
            for(int y=0;y<=m;y++){
                if(out[x][y]==1){
                    cout<<"1 ";
                }
                else{
                    cout<<"0 ";
                }
            }
            cout<<endl;
        }
        cout<<endl<<endl;
        return true;
    }
    if(i>n || j>m){
        return false;
    }
    if(a[i][j]=='X'){
        return false;
    }

    out[i][j]=1;
    if(j+1<=m && a[i][j+1]!='X'){
        bool rightside=ratinmaze(a,n,m,i,j+1,out);
        if (rightside){
            return true;
        }
    }
    if(i+1<=n && a[i+1][j]!='X'){
    bool downside=ratinmaze(a,n,m,i+1,j,out);
    if(downside){
        return true;
    }
    }
    out[i][j]=0;
    return false;
}

int main(){
int n,m;
cin>>n>>m;
char a[1000][1000];
char out[1000][1000]={0};

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>a[i][j];
    }
}


bool ans=ratinmaze(a,n-1,m-1,0,0,out);
if(ans==false)
   cout<<"-1";

return 0;
}
