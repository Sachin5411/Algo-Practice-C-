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
/*void operator>>(istream& is, node*&head){
    buildlist(head);
}*/

node* reversell(node*head,int k)
{
    node *c=head;
    node*p=NULL;
    node*n=NULL;
    int j=0;

    while(c!=NULL && j<k){
        n=c->next;
        c->next=p;
        p=c;
        c=n;
        j++;
    }
    //head=p;
    if(n!=NULL){
    head->next=reversell(n,k);
    }
return p;
}


int main(){
node*head=NULL;
int n,k;
cin>>n>>k;

buildlist(head,n);


node*headd=reversell(head,k);
print(headd);


return 0;
}


