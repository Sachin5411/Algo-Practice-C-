#include<iostream>
using namespace std;

void getparanthesis(int n,int open,int close,string str){
    if(close==n){
        cout<<str<<endl;
        return;
    }
    if(open>close){
            cout<<" close +1  "<<str<<endl;
            getparanthesis(n,open,close+1,str+')');

    }
    if(open<n){
            cout<<" open+1 "<<str<<endl;
        getparanthesis(n,open+1,close,str+'(');
    }
}

int main(){
int n;
cin>>n;

getparanthesis(n,0,0,"");




return 0;

}
