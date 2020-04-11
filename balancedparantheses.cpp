#include<iostream>
using namespace std;
#include<stack>
#include<string>
int main(){
stack<char> ch;
string s;
cin>>s;

int n=s.length();
//cout<<n;
int i;
for(i=0;i<n;i++){
    char a=s[i];

    if(a=='('){
        ch.push(a);
       }
    if(a=='{'){
        ch.push(a);
       }
    if(a=='['){
        ch.push(a);
       }
    if(a==')' ){
        if(!ch.empty() && ch.top()=='('){
            ch.pop();
        }
        else{
            break;
        }

    }
    if(a=='}' ){
        if(!ch.empty() && ch.top()=='{'){
            ch.pop();
        }
        else{
            break;
        }

    }
if(a==']' ){
        if(!ch.empty() && ch.top()=='['){
            ch.pop();
        }
        else{
            break;
        }

    }
}
if(ch.empty()){
    cout<<"Yes";
}
else{
    cout<<"No";
}

return 0;
}
