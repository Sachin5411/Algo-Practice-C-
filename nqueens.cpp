#include<iostream>
using namespace std;

int counter=0;

bool ispossible(int board[][10],int i,int j,int n){
    int k=0;

    while(k<i){
        if(board[k][j]==1){
            return false;
        }
        k++;
    }

    int x=i,y=j;
    while(x>=0 && y>=0)
{
    if(board[x][y]==1){
        return false;
    }
    x--;y--;
}
    x=i;y=j;
    while(x>=0 && y<n){

    if(board[x][y]==1){
        return false;
    }
    x--;y++;
    }
return true;
    }







bool nqueen(int board[][10],int i,int n){

    if(i==n){
            counter++;


        return false;
    }

    for(int j=0;j<n;j++){

        if(ispossible(board,i,j,n)){
                board[i][j]=1;
            bool forrest=nqueen(board,i+1,n);

        if(forrest){
            return true;
        }
        board[i][j]=0;
    }}
return false;
}




int main(){
int n,board[10][10]={0};
cin>>n;

nqueen(board,0,n);
cout<<counter;


return 0;}
