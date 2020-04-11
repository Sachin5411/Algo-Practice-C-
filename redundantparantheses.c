#include<iostream>
using namespace std;
#include<stack>
#include<string>
int main(){
stack<char> s;
string str;
cin>>str;

int n=str.length();

for(int i=0;i<n;i++){
    char a= str[i];
    if(a==')'){
        if(s.top()=='('){
            break;
           }
        else{
            while(!s.empty() && s.top()=='('){
                    s.pop();
            }
        }

    }
    else{
        s.push(a);
    }
}

if(s.empty()){
    cout<<"Duplicate";
}
else{
    cout<<"Not Duplicates";
}








return 0;
}
