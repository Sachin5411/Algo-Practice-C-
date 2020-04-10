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

void print(node*head){
    while(head!=NULL){
        cout<<head->data<<" -> ";
        head=head->next;
    }
    cout<<endl;
}


int main(){
node*head=NULL;
insertathead(head,2);
insertathead(head,3);
insertathead(head,4);
insertathead(head,5);
print(head);


return 0;}
