#include<iostream>
using namespace std;
#include<stack>


int main(){

stack<int> s1,s2;
int n;
cin>>n;
for(int i=0;i<n;i++){
    s1.push(i);
}

while(!s1.empty()){
    int top=s1.top();
    s2.push(top);
    s1.pop();
}

while(!s2.empty()){
    int x=s2.top();
    cout<<x<<" ";
    s2.pop();
}

return 0;}
