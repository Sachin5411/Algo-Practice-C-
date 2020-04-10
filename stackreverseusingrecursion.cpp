#include<iostream>
using namespace std;
#include<stack>

void insertatbottom(stack<int>&s ,int data){

    if(s.empty()){
        s.push(data);
        return;
    }
    int y=s.top();
    s.pop();
    insertatbottom(s,data);
    s.push(y);
}

void reverserecur(stack<int> &s){
    if(s.empty()) return;

    int x=s.top();
    s.pop();
    reverserecur(s);
    insertatbottom(s,x);


}

int main(){
stack<int> s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);
reverserecur(s);

while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
}

return 0;}
