#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

bool compare(string a, string b){
return a>b;
}

int main(){
    int test;
    string myint1;
    cin>>test;
int n;
string a[1000];
while(test>0){
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n,compare);

for(int i=0;i<n;i++){
    myint1.append(a[i]);
}
cout<<myint1;
//long long int number=stoi(myint1);
//cout<<number;


test--;
}
return 0;
}
