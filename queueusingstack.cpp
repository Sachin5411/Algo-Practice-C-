#include<iostream>
using namespace std;
#include<stack>

int main(){
stack<int> s1,s2;

for(int i=0;i<5;i++){
        s1.push(i);
}

while(!s1.empty()){
    while(s1.size()!=1){
        int a=s1.top();
        s1.pop();
        s2.push(a);
    }
    cout<<s1.top()<<" ";
    s1.pop();
    while(!s2.empty()){
        int x=s2.top();
        s2.pop();
        s1.push(x);
    }

}



return 0;}
