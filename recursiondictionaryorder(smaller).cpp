#include<iostream>
using namespace std;
#include<string>
#include<algorithm>

// 3 cases passed out of 4

bool compare(string a, string b){
return a>b;
    }

string str[105];
long long int counter=0;
void print(char in[],char out[],int i,int k,string original)
{
    if(in[i]=='\0'){
        out[k]='\0';
        if(out<original){
            str[counter]=out;
            counter++;
    }
    return;
    }
     for(int j=i;in[j]!='\0';j++){
        swap(in[i],in[j]);
        out[k]=in[i];
        print(in,out,i+1,k+1,original);
        swap(in[i],in[j]);

     }
}
int main(){

char a[105],out[105];
cin>>a;
string s=a;
//int n=s.length();
print(a,out,0,0,s);
//cout<<counter;
sort(str,str+counter,compare);
for(long long int i=counter-1;i>=0;i--){
    cout<<str[i]<<endl;
}

return 0;}
