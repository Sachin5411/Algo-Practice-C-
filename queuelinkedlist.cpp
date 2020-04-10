#include<iostream>
using namespace std;
#include<list>
class queue{
private:
    int cs;
    list<int> q;
public:
    queue(){
       this->cs=0;

    }

    bool isEmpty(){
        return this->cs==0;
    }
    void enqueue(int data){
        this->cs+=1;
        this->q.push_back(data);
    }
    void dequeue(){
        if(!isEmpty()){
        this->cs-=1;
        this->q.pop_front();
        }

    }

    int getfront(){
        return this->q.front();
    }

};


int main(){
    queue q;
    for(int i=0;i<5;i++){
        q.enqueue(i);
    }
//q.dequeue();
//q.enqueue(10);
//q.dequeue();
//q.enqueue(9);
    while(!q.isEmpty()){
        cout<<q.getfront()<<" ";
        q.dequeue();
    }


return 0;}
