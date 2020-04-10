#include<iostream>
using namespace std;
#include<string>

string a="";
string formatstring(string s, int n,int i){
    if(i==n){
    return a;
    }
    a+=s[i];

    if(s[i]==s[i+1]){
        a+='*';
    }

    formatstring(s,n,i+1);


return  a;
}


int main(){

string s;
cin>>s;

int n=s.length();
cout<<formatstring(s,n,0);





return 0;}
