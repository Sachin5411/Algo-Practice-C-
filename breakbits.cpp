#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int breakbits(string s){
    string a="";
int count=0;
for(int i=s.length()-1;i>=0;i--){
    a+= s[i];
    int number=0;
    //cout<<a<<endl;
    number = stoi(a, 0, 2);
    //cout<<number<<endl;
    if(number!=0 && number%5==0){
        //cout<<a<<endl;
        a="";
        //x=a.length();
         count++;
    }
}
if(count==0){
    return -1;
}
return count;
}

int main(){
string s;
int x=0;
cin>>s;
cout<<breakbits(s);
return 0;

}
