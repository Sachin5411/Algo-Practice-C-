#include<iostream>
#include<queue>
using namespace std;


int main(){
int a[1005],n;
queue <int> s;
cin>>n;
for(int i=0;i<n;i++){
    int q;
    cin>>q;
    s.push(q);
}

for(int i=0;i<n;i++){
    cin>>a[i];
}

int time=0;

for(int i=0;i<n;i++){
    if(a[i]==s.front()){
            s.pop();
            //cout<<time<<endl;
        time+=1;
        //cout<<time<<endl;
    }
    else{
        int counter=1;
        while(s.front()!=a[i]){
        int x=s.front();
        s.pop();
        s.push(x);
        counter++;
            }
        s.pop();
        time+=counter;

    }
}

cout<<time<<endl;
return 0;

}
