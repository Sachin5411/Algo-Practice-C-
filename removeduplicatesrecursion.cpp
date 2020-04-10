#include<iostream>
using namespace std;
#include<string>

string a="";
string removeduplicates(string s, int n,int i){
    if(i==n){
    return a;
    }


    if(s[i]==s[i+1]){
            removeduplicates(s,n,i+1);
    }
    else{
            a+=s[i];
    removeduplicates(s,n,i+1);}


return  a;
}


int main(){

string s;
cin>>s;

int n=s.length();
cout<<removeduplicates(s,n,0);





return 0;}

