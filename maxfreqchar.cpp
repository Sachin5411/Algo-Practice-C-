#include<iostream>
#include<string>
#include<cstring>

#include<algorithm>

using namespace std;


int main(){

string s;
cin>>s;
//int n=strlen(s);
int maxle=0;
int cc=1;
char x;
sort(s.begin(),s.end());

for(int i=1;i<s.length();i++){
    if(s[i]==s[i-1]){
        cc++;
    if(cc>maxle){
            maxle=cc;
            x=s[i];
        }
    }
    else{
            cc=1;
    }
}

cout<<x<<endl;
//cout<<maxle;
return 0;
}
