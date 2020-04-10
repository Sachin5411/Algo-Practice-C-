#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool compare(string a, string b){
    if(a==b.substr(0,a.length())){
        return a.length()<b.length();
    }
if(b==a.substr(0,b.length())){
        return a.length()>b.length();
    }
    return a<b;
}

int main(){
string s[1005];
int n;
cin>>n;
string a;
for(int i=0;i<n;i++){

    cin>>a;
    s[i]=a;
}

sort(s,s+n,compare);
for(int i=0;i<n;i++){

    cout<<s[i]<<endl;
}
return 0;}
