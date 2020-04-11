#include<iostream>
#include<stack>

using namespace std;


void insertatbottom(stack<int> &s,int data){
    if(s.empty()) {
        s.push(data);
    return;
    }
    int y= s.top();
    s.pop();
    insertatbottom(s,data);
    s.push(y);
}


void reversestack(stack<int> &s){
    if(s.empty()){
        return;
    }
    int x=s.top();
    s.pop();
    reversestack(s);
    insertatbottom(s,x);

}





int main(){

int n;
stack<int> s;
cin>>n;
for(int i=0;i<n;i++){
    cin>>i;
    s.push(i);
}

reversestack(s);


while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
}


return 0;}
