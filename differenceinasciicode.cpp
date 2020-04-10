#include<iostream>
#include<string>
using namespace std;

//Jugad xD

int main(){
string s;
cin>>s;


for(int i=0;i<s.length();i++){
    if(i==s.length()-1){
        cout<<s[i];
        break;
    }
    int a=int(s[i]);
    int b=int(s[i+1]);
    int c=b-a;
    cout<<s[i];
    cout<<c;
}

//cout<<s;
return 0;
}
