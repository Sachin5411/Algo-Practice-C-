
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
int length(node*head){
    int l=0;
    while(head!=NULL){
        l+=1;
        head=head->next;
    }
return l;
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
    temp->next =new node(data);
    return;
}


void buildlist(node*&head){
    int data;
    cin>>data;
    while(data!=-1){
        insertattail(head,data);
        cin>>data;
    }
}
void kthelement(node*head,int k){
    int len=length(head);
    int s=len-k;
    int counter=0;
    while(counter<k){
        head=head->next;
        counter++;
    }
    cout<<head->data;
}


void operator>>(istream& is, node*&head){
    buildlist(head);
}

void print(node*head){
while(head!=NULL){
    cout<<head->data<<" -> ";
    head=head->next;
}
}

int main(){
node*head=NULL;
cin>>head;
int k;
cin>>k;
kthelement(head,k);
//print(head);


return 0;
}
