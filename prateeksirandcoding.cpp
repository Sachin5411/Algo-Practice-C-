#include<iostream>
#include<stack>
using namespace std;


int main(){
stack<int> s;
int q;
cin>>q;
int n,m;
while(q--){
    cin>>n;
    if(n==2){
            cin>>m;
        s.push(m);
    }
    if(n==1 && s.empty()){
        cout<<"No Code"<<endl;
    }
    if(n==1 && !s.empty()){
        int x=s.top();
        s.pop();
        cout<<x<<endl;

    }

}


return 0;}
