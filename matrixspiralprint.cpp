#include<iostream>
using namespace std;



int main(){

int a[1005][1005],r,c;

cin>>r>>c;
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cin>>a[i][j];
    }
}

int fr=0,lr=r-1,fc=0,lc=c-1;
while(fc<=lc &&  fr<=lr){
for(int i=fr;i<=lr;i++){
    cout<<a[i][fc]<<", ";
}
fc++;
for(int i=fc;i<=lc;i++){
    cout<<a[lr][i]<<", ";
}
lr--;
for(int i=lr;i>=fr;i--){
    cout<<a[i][lc]<<", ";
}
lc--;
for(int i=lc;i>=fc;i--){
    cout<<a[fr][i]<<", ";
}
fr++;
}
cout<<"END";





return 0;
}
