#include<iostream>
#include<string>

using namespace std;

int main(){
string s;
cin>>s;

for(int i=0;i<s.length();i++){
    int a=int(s[i]);
    if(a>=65 && a<=90){
        cout<<endl<<s[i];
    }
    else if(a>=97 && a<=122){
        cout<<s[i];
    }

}




return 0;
}
