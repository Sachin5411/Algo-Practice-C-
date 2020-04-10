#include<iostream>
using namespace std;

class queue{
private:
    int *a;
    int f;
    int rear;
    int ms;
    int cs;

public:
    queue(int d_size=8){
       this->f=0;

       this->cs=0;
       this->ms=d_size;
       this->rear=(ms-1);
       this->a=new int[this->ms]();
    }

    bool isFull(){
        return this->cs==this->ms;
    }
    bool isEmpty(){
        return this->cs==0;
    }
    void enqueue(int data){
        if(!isFull()){
        this->cs+=1;
        this->rear=(this->rear+1)%this->ms;
        this->a[this->rear]=data;
        }


        else{
            cout<<"Queue Full"<<endl;
        }
    }
    void dequeue(){
        if(!isEmpty()){
        this->cs-=1;
        this->f=(f+1)%this->ms;
        }

    }

    int getfront(){
        return this->a[this->f];
    }

};


int main(){
    queue q(5);
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
