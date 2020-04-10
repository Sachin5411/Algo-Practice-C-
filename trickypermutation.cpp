#include<iostream>
using namespace std;
#include<set>

set <string > s;
void permut(char in[],char out[],int i,int j){

    if(in[i]=='\0'){
        out[i]='\0';
        s.insert(out);
        return;
    }
    for(int k=i;in[k]!='\0';k++){
    swap(in[i],in[k]);
    out[j]=in[i];
    permut(in,out,i+1,j+1);
    swap(in[i],in[k]);
    }

}

int main(){

char a[1005];
cin>>a;

char out[1005];

permut(a,out,0,0);
set <string > :: iterator it;
for(it=s.begin();it!=s.end();it++)
{
    cout<<*it<<endl;
}


return 0;}
