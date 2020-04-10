#include<iostream>
using namespace std;

string table[] = { " ", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wx","yz" };

int counter=0;
void smartkeypad(char in[],char out[],int i,int j)
{
        if(in[i]=='\0'){
            out[j]='\0';
            cout<<out<<" ";
            counter++;
            return;
        }
        int digit=in[i]-'0';
        if(digit==0 ){
            smartkeypad(in,out,i+1,j);
        }
        for(int k=0;table[digit][k]!='\0';k++){
            out[j]=table[digit][k];
            smartkeypad(in,out,i+1,j+1);
        }

}

int main(){

char in[100],out[100];
cin>>in;
smartkeypad(in,out,0,0);
cout<<endl<<counter;


return 0;
}

