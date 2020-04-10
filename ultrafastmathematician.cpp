#include<iostream>
using namespace std;

#include<string>
int main(){
string a,b;
int c[1005];
int t;
cin>>t;
while(t>0){
    cin>>a>>b;
    for(int i=0;i<a.length();i++){
        if(a[i]==b[i]){
            c[i]=0;
        }
        else{
            c[i]=1;
        }
    }
        for(int i=0;i<a.length();i++){
            cout<<c[i];
        }
        cout<<endl;
    t--;
}


return 0;
}
