#include<iostream>
using namespace std;
#include<set>



int main(){

int arr[]={1,2,8,3,5,9,2,1,3,5};

int n=sizeof(arr)/sizeof(int);

set<int> s;

for(int i=0;i<n;i++){
    s.insert(arr[i]);
}
//one way
s.erase(3);
//another way

set<int>::iterator it=s.find(2);
s.erase(it);


for(set<int>::iterator it=s.begin();it!=s.end();it++){
    cout<<(*it)<<" ";
}





return 0;}


