#include<iostream>
using namespace std;
#include<queue>

int main(){
queue<int> q1,q2,q3;
for(int i=0;i<5;i++){
    q1.push(i);

}

while(!q1.empty())
{
while(q1.size()!=1){
    int a=q1.front();
    q1.pop();
    q2.push(a);

}
cout<<q1.front()<<" ";
q1.pop();
swap(q1,q2);
}
return 0;
}
