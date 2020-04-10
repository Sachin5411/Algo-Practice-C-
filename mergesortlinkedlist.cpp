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
cout<<endl;

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
    int t;
    cin>>t;
    while(t--){
node *a=NULL,*b=NULL;
int n,m;
cin>>n;
buildlist(a,n);
cin>>m;
buildlist(b,m);
node*c=mergelist(a,b);
cout<<c;}

}
