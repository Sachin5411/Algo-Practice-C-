#include<iostream>
using namespace std;

class node{

public:
    int data;
    node*next;

    node(int d){
        data=d;
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
    temp->next=new node(data);
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

void print(node*head){
while(head!=NULL){
    cout<<head->data<<" -> ";
    head=head->next;
}
cout<<endl;

}
void operator>>(istream& is,node*& head){
    buildlist(head);
    return;
}

void operator<<(ostream& os,node* head){
    print(head);
    return;
}


node* mergelist(node *a, node*b)
{
    if(a==NULL){
        return b;
    }
    else if(b==NULL){
        return a;
    }

    node*c;
    if(a->data <= b->data){
        c=a;
        c->next=mergelist(a->next,b);
    }
    if(a->data > b->data){
        c=b;
        c->next=mergelist(a,b->next);
    }
 return c;
}


int main(){
node *a=NULL,*b=NULL;
cin>>a;
cin>>b;
node*c=mergelist(a,b);
cout<<c;
//reverselist(head);
//node* newhead=recursivereverse(head);
//cout<<newhead;
}
