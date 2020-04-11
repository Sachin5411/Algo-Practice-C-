#include<iostream>
using namespace std;
#include<deque>

int main(){

long int a[100005],n,k;
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
cin>>k;
int i;
deque<int> q;
for(i=0;i<k;i++){
    while(!q.empty() && a[i]>=a[q.front()]){
        q.pop_front();
    }
    q.push_back(i);
}
for(;i<n;i++){
    cout<<a[q.front()]<<" ";
    while(!q.empty() && q.front()<=i-k){
        q.pop_front();
    }
    //q.push_back(i);
    while(!q.empty() && a[i]>=a[q.back()]){
        q.pop_back();
    }
    q.push_back(i);
}


cout<<a[q.front()]<<" ";



return 0;
}
