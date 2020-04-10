#include<iostream>
using namespace std;

bool staircasesearch(int a[100][100],int r, int c,int key){
    int x=c-1;
    int y=0;

    while(x>=0 || y<r){

        if(a[y][x]==key){
            return true;
        }

        if(a[y][x]>key){
            x--;

        }
        if(a[y][x]<key){
            y++;
        }
    }
return false;
}




int main(){
int r,c,key;
int a[100][100];
cin>>r>>c;

for(int i=0;i<r;i++){
for(int j=0;j<c;j++)
{
cin>>a[i][j];
}}
cin>>key;

if(staircasesearch(a,r,c,key)){
    cout<<"1";
}
else{
    cout<<"0";
}
return 0;
}
