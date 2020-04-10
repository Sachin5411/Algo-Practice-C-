#include<iostream>
using namespace std;

int counter=0;

void printsubse(char in[100],char out[100],int i,int j){
    if(in[i]=='\0'){
        out[j]='\0';
        cout<<out<<" ";
        counter++;
        return ;
    }

    printsubse(in,out,i+1,j);
    out[j]=in[i];
    printsubse(in,out,i+1,j+1);


}


int main(){
char in[100],out[100],i=0,j=0;
cin>>in;
printsubse(in,out,i,j);
cout<<endl<<counter;

}
