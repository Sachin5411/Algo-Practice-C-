#include<iostream>
using namespace std;


int main(){
int n,m;
int maximum=0;
cin>>n>>m;

for(int i=n;i<=m;i++){
        for(int j=i;j<=m;j++){
         int current=i^j;
         //cout<<current<<endl;
        if(current>maximum){
            maximum=current;
        }
        }
}

cout<<maximum;

return 0;
}
