#include<iostream>
using namespace std;

string table[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

string searchIn [] = {
            "prateek", "sneha", "deepak", "arnav", "shikha", "palak",
            "utkarsh", "divyam", "vidhi", "sparsh", "akku"
    };


bool  issubstr(string a,string b){
    int m =a.length();
    int n=b.length();

    for(int i=0;i<m-n;i++){
        int j;
        //cout<<"a[i] "<<a[i]<<" b[i] "<<b[i]<<endl;
            for(j=0;j<n;j++){
                    //cout<<"a[i] .. "<<a[i+j]<<" b[i] .."<<b[j]<<endl;
                if(a[i+j]!=b[j]){
                    break;
                }
            }
            if (j == n)
            return true;

    }
  return false;
}


void smartkeypad(char in[],char out[],int i,int j)
{
        if(in[i]=='\0'){
            out[j]='\0';
            for(int m=0;m<11;m++){
                if(issubstr(searchIn[m],out)){
                    cout<<searchIn[m]<<endl;
                }
            }

            return;
        }
        int digit=in[i]-'0';
        if(digit ==0 || digit==1){
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

return 0;
}
