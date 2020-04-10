#include<iostream>
using namespace std;

class node{
public:
    int data;
    node*next;

    node(int d){
        data=d;
        next=NULL;
    }
};


void insertathead(node*& head,int data){
    node* n =new node(data);
    n->next=head;
    head=n;
}


void insertattail(node*&head,int data){
    if(head==NULL){
        head=new node(data);
        return;
    }
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new node(data);
    return;

}

int length(node*head){
    int len=0;
    while(head!=NULL){
        head=head->next;
        len+=1;
    }
    return len;

}



void insertinmiddle(node*&head,int data,int p){
    int len=length(head);
    if(head==NULL || p==0){
        insertathead(head,data);
       // return;
    }

    //cout<<"length is "<<len<<endl;
    else if(p>len){
        insertattail(head,data);
        //return;
    }
    else{
    int jumps=1;
    node*temp=head;
    while(jumps<=p-1){
        temp=temp->next;
        jumps+=1;
    }
    node*n=new node(data);
    n->next=temp->next;
    temp->next=n;
    }
}

void print(node*head){
    while(head!=NULL){
        cout<<head->data<<" -> ";
        head=head->next;
    }
    cout<<endl;
}

int main(){

    node*head=NULL;

    insertinmiddle(head,1,2);
    insertinmiddle(head,2,0);
    insertinmiddle(head,3,1);
    //cout<<length(head);
    insertinmiddle(head,4,3);
    insertinmiddle(head,5,2);
    insertattail(head,10);
    print(head);

return 0;

}
