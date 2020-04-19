#include<iostream>
using namespace std;
#include<set>
#include<vector>

multiset<int> s;

void hostel(int x,int y){
    int d= (x*x) + (y*y);
    s.insert(d);
}

int main(){

int n,k;
cin>>n;
cin>>k;
vector<int> v;

while(n--){

    int a;
    cin>>a;
    if(a==1){
        int x,y;
        cin>>x>>y;
        hostel(x,y);
    }
    if(a==2){
        set<int>::iterator it=s.begin();
        int z=0;
            while(z<k-1){
                z++;
                it++;
            }
            int d=(*it);
       v.push_back(d);
    }
}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}



return 0;}












