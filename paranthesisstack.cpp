#include<iostream>
using namespace std;
#include<stack>
#include<string>

bool check(string s){
    stack<char> s1;
for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            s1.push('(');
           }
        if(s[i]==')' ){
            if(s1.empty() || s1.top()!='('){

            return false;
           }
           else{
            s1.pop();
           }
           }

}
return s1.empty();
}
int main(){

string s="(()()))";

if(check(s)){
    cout<<"Valid ";
}
else{
    cout<<" Not Valid";
}
return 0;
}
