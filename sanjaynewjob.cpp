#include<iostream>
#include<algorithm>
using namespace std;

bool compare(pair<string,int> p1,pair<string,int> p2){
    if(p1.second ==p2.second){
        return p1.first<p2.first;

    }
return p1.second>p2.second;
}

int main(){
pair<string,int> p[1005];
int n,threshold;
cin>>threshold;
cin>>n;

for(int i=0;i<n;i++){
    cin>>p[i].first;
    cin>>p[i].second;
}
sort(p,p+n,compare);

for(int i=0;i<n;i++){
        if(p[i].second<threshold){
            continue;
        }
    cout<<p[i].first<<" "<<p[i].second<<endl;
}

return 0;
}
