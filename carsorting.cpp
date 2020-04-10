#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;


bool compare(pair<int,int> p1,pair<int,int> p2){
        int d1= p1.first*p1.first +p1.second*p1.second;
int d2= p2.first*p2.first +p2.second*p2.second;

if(p1==p2){
    return p1.first<p2.first;
}
return d1<d2;

}
int main(){
vector <pair<int,int> > v;
int n;
cin>>n;

for(int i=0;i<n;i++){

    int n,m ;
    cin>>n>>m;
    v.push_back(make_pair(n,m));
}

sort(v.begin(),v.end(),compare);
for(auto x:v){
    cout<< x.first<<" "<<x.second<<endl;
}

return 0;
}
