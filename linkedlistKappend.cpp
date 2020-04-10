#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next;

    node(int d){
    data=d;
    next=NULL;
    }

};


void insertattail(node*&head,int data){
    if(head==NULL){
        head=new node(data);
        return;
    }
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next =new node(data);
    return;
}


void buildlist(node*&head,int n){
    int data;

    for(int i=0;i<n;i++){
    cin>>data;
        insertattail(head,data);


    }
}

void print(node*head){
while(head!=NULL){
    cout<<head->data<<" ";
    head=head->next;
}
}

int length(node*head){
    int l=0;
    while(head!=NULL){
        l+=1;
        head=head->next;
    }
return l;
}

void append(node*&head,int k){
    int len=length(head);
    int counter=0;
    node*prev;
    node*temp=head;
    while(counter<(len-k)){
        prev=temp;
        temp=temp->next;
        counter++;
    }
    prev->next=NULL;
    node*newhead=temp;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=head;

    head=newhead;

}

int main(){
node*head=NULL;
int n;
cin>>n;

buildlist(head,n);
int k;
cin>>k;
append(head,k);
print(head);

return 0;
}


