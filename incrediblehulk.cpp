#include<iostream>
using namespace std;



int main()
{
    int n,t;
    cin>>t;
    while(t>0){
    cin>>n;
    int steps=0;
    while(n>0){
        if(n&1==1){
            steps++;
        }
        n=n>>1;
    }
    cout<<steps<<endl;

t--;
    }
    return 0;
}
