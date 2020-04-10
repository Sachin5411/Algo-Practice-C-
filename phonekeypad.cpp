#include<iostream>
using namespace std;

char a[][100]={ "", "",  "ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ" };

void phonekeypad(char *in , char* out,int i,int j){

    if(in[i]=='\0'){
        out[j]='\0';
        cout<<out<<" ";
        return;
    }
    int digit = in[i]-'0';
    if(digit==0 ||digit==1){
        phonekeypad(in,out,i+1,j);
    }

    for(int k=0;a[digit][k]!=0;k++){
        out[j]=a[digit][k];
        phonekeypad(in,out,i+1,j+1);
    }
}


int main(){
char a[1005];
char out[1005];
cin>>a;
phonekeypad(a,out, 0, 0);


return 0;}
