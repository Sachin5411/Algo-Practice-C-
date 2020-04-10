#include<iostream>
using namespace std;

#include<string>
int main(){

string s;
cin>>s;
int c=1;
for(int i=1;i<=s.length();i++){
    if(s[i]==s[i-1]){
        c++;
    }
    else{
        cout<<s[i-1]<<c;
        c=1;
    }
}


return 0;
}
