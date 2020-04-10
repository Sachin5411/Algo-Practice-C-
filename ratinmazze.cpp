#include<iostream>
using namespace std;

bool ratinmaze(char maze[10][10],char path[][10],int i,int j, int n ,int m){

    if(i==n && j==m){
            path[i][j]=1;
        for(int x=0;x<=n;x++){
        for(int y=0;y<=m;y++){
                if(path[x][y]==1){
                    cout<<"P ";
                }
                else{
                    cout<<"_ ";
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
    if(maze[i][j]=='X'){
        return false;
    }

    //Check for right
        path[i][j]=1;
        bool rightpossible=ratinmaze(maze,path,i,j+1,n,m);
        bool downpossible=ratinmaze(maze,path,i+1,j,n,m);

        path[i][j]=0;

        if(rightpossible || downpossible){
            return true;
        }

        return false;





    }

int main(){
    char mazee[10][10];
    /*char maze[10][10]={
                "0000",
                "00X0",
                "000X",
                "0X00"
    };*/
    int n,m ;
    char path[10][10]={0};
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mazee[i][j];
        }
    }
    ratinmaze(mazee,path,0,0,n-1,m-1);


return 0;}
