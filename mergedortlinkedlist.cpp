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

node* mergelist(node *a, node *b){
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }
    node*c;
    if(a->data < b->data){
        c=a;
        c->next=mergelist(a->next,b);

    }
    if(b->data <a->data){
        c=b;
        c->next=mergelist(a,b->next);
    }
    return c;
}
node* midpoint(node*head){
    node*slow=head;
    node*fast=head->next;


    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;

}

node* mergesort(node*&head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node*mid=midpoint(head);

    node*a=head;
    node*b=mid->next;
    mid->next=NULL;

    a=mergesort(a);
    b=mergesort(b);

    node*c=mergelist(a,b);

return c;
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
mergesort(head);
print(head);


return 0;
}
