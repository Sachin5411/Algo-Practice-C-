#include<iostream>
using namespace std;
#include<deque>
#define ll long long

// 8 passed


int main(){

ll int a[10000005],n,k;
cin>>n;
for(ll int i=0;i<n;i++){
    cin>>a[i];
}
cin>>k;
ll int i;
deque<ll int> q;
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
