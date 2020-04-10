#include<iostream>
using namespace std;


bool issafe(int board[][105],int i,int j,int n){

    for(int k=0;k<i;k++){
        if(board[k][j]==1){
            return false;
        }
    }

    int x=i,y=j;
    while(x>=0 && y>=0){
        if(board[x][y]==1){
            return false;
        }
        x--;
        y--;
    }
    x=i,y=j;
    while(x>=0 && y<n){
        if(board[x][y]==1){
            return false;
        }
        x--;
        y++;
    }

return true;
}


bool Nqueen(int board[][105],int i,int n){

    if(i==n){
            //Base Case

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==1){
                    cout<<"Q ";
                }
                else{
                    cout<<"_ ";
                }
            }
            cout<<endl;
        }
        cout<<endl<<endl;
    return false;
    }


    for(int j=0;j<n;j++){

        if(issafe(board,i,j,n)){
                board[i][j]=1;

        bool ispossibleforremaining= Nqueen(board,i+1,n);
        if(ispossibleforremaining){
            return true;
        }
        board[i][j]=0; //Back tracking
    }}
    return false;

}

int main(){

int n;
cin>>n;
int a[105][105]={0};

Nqueen(a,0,n);

return 0;}
