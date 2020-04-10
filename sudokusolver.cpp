#include<iostream>

#include<cmath>
using namespace std;

bool ispossible(int a[15][15],int i,int j,int n,int number){

    for(int x=0;x<n;x++){
        if(a[i][x]==number || a[x][j]==number){
            return false;
        }
    }

    int sx= (i/ 3)*3;
    int sy=(j/ 3)*3;
    for(int x=sx;x<sx+3;x++){
        for(int y=sy;y<sy+3;y++){
            if(a[x][y]==number){
                return false;
            }
        }
    }
return true;
}


bool sudoku(int a[15][15],int n,int i,int j){

    if(i==n){
        for(int x=0;x<n;x++){
            for(int y=0;y<n;y++){
                cout<<a[x][y]<<" ";
            }
            cout<<endl;
        }
        return true;
    }
    if(j==n)
    {
        sudoku(a,n,i+1,0);
    }
    if(a[i][j]!=0){
        sudoku(a,n,i,j+1);
    }
    else{
    for(int number=1;number<=n;number++){

        if(ispossible(a,i,j,n,number)){
                a[i][j]=number;
            bool forrest=sudoku(a,n,i,j+1);
            if(forrest==true){
                return true;
            }
        }
    }
    a[i][j]=0;
return false;}
}


int main(){
int n;
cin>>n;
int a[15][15]={0};

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
}

sudoku(a,n,0,0);






return 0;}
