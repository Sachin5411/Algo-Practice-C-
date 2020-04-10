#include<iostream>
using namespace std;
#include<algorithm>
#include<set>
#include<vector>

set<vector<int> > s;

void sumitup(int *a,int n,int target,int i,int j,int out[]){

    if(target==0){
        vector<int > temp;
        for(int k=0;k<j;k++){
            temp.push_back(out[k]);
        }
        s.insert(temp);
        return;
    }

    if(i==n){
        return;
    }
    if(target<0){
        return;
    }
    out[j]= a[i];
    /*cout<<" subtracting target "" target is "<< target<<endl;
    for(int k=0;k<j;k++){
        cout<<out[k]<<" ";
    }cout<<endl;*/

    sumitup(a,n,target-a[i],i+1,j+1,out);

   /* cout<<" without subtracting target "<<" target is "<< target<<endl;
    for(int k=0;k<j;k++){
        cout<<out[k]<<" ";
    }cout<<endl;*/
    sumitup(a,n,target,i+1,j,out);


}

int main(){

int n,a[1005],out[1005];
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
int target;
cin>>target;
sort(a,a+n);

sumitup(a,n,target,0,0,out);
set<vector<int> > :: iterator it;
for(it =s.begin();it!=s.end();it++)
{

    vector<int > v=*it;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

}
return 0;}
