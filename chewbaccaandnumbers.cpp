#include<iostream>
#include<string>
using namespace std;



int main(){

string a;
cin>>a;

int i=0;
if(a[i]=='9'){
    i++;
}

for(;i<a.length();i++){
    int digit = a[i]-'0';
    if(digit>=5){
        digit=9-digit;
        a[i]=digit+'0';
    }
}

cout<<a;




return 0;
}
