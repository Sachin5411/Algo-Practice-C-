#include<iostream>
using namespace std;


void permutation(char *in,char *out,int i,int j){

    if(in[i]=='\0'){
        out[i]='\0';
        cout<<out<<" " ;
        return;
    }

    for(int k=i;in[k]!='\0';k++){
        swap(in[i],in[k]);
        out[j]=in[i];
        permutation(in,out, i+1,j+1);
        swap(in[i],in[k]);
    }


}




int main(){
char in[1005],out[1004];

cin>>in;


permutation(in,out,0,0);

return 0;}
