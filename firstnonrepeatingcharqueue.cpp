#include<iostream>
using namespace std;
#include<queue>
#include<cstring>

//WRONG , use hash maps

int main(){
int a[256]={0};
char ch[]="aabccbez";
int n=strlen(ch);
queue<int> q;
char first;
for(int i=0;i<n;i++){
    a[i]+=1;
    while(!q.empty() && a[q.front()]>0){
        q.pop();
    }
    q.push(i);
    first=ch[i];
}
cout<<first;


return 0;
}
