#include<iostream>
using namespace std;
#include<queue>

int main(){
queue<int> q1,q2;
for(int i=0;i<5;i++){
    q2.push(i);
    if(q1.empty()){
        swap(q1,q2);
    }
    else{
        while(!q1.empty()){
            int a=q1.front();
            q1.pop();
            q2.push(a);

        }
        swap(q1,q2);
    }


}
while(!q1.empty()){
    cout<<q1.front()<<" ";
    q1.pop();
}




return 0;
}
