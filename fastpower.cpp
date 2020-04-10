#include<iostream>
using namespace std;

int power(int a,int b){
if(b==0){
    return 1;
}
return a*power(a,b-1);
}

int fastpower(int a,int b){
    if(b==0){
        return 1;
    }

    int ans=fastpower(a,b/2);
    ans=ans*ans;
    if(b&1){
        return a*ans;
    }
    return ans;

}


int main(){

int a,b;
cin>>a>>b;

cout<<fastpower(a,b);

return 0;
}
