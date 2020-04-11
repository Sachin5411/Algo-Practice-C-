#include<iostream>
using namespace std;
#include<stack>
#include<string>
int main(){

int q;
cin>>q;

while(q>0){
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
            while(!s.empty() && s.top()!='('){
                    s.pop();
            }
            s.pop();
        }

    }
    else{
        s.push(a);
    }
}


if(s.empty()){
    cout<<"Not Duplicates"<<endl;
}
else{
    cout<<"Duplicate"<<endl;
}

q--;}






return 0;
}
