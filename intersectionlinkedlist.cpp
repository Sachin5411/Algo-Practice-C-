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

void insertionattail(node*&head,int data){

    if(head==NULL){
        head=new node(data);
        return;
    }
    node*tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    tail->next=new node(data);
    return;
}

void buildlist(node*&head,int n)
{
    int data;
    for(int i=0;i<n;i++){
        cin>>data;
        insertionattail(head,data);
    }
}
void print(node*head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}


void intersection(node*a,int n,node*b,int m){
    if(n>m){
        int d=n-m;
        int counter=0;
        node*temp=a;
        while(counter<d){
            temp=temp->next;
            counter+=1;
        }
        while(temp->data!=b->data ){

            cout<<temp->data<<" temp "<<endl;
            temp=temp->next;
            cout<<b->data<<" b "<<endl;
            b=b->next;

        }
        if(temp!=NULL)
        {cout<<b->data<<endl;}

        //cout<<b->data<<endl;

    }
    else if (m>n){

        int d=m-n;
        int counter=0;
        node*temp=b;
        while(counter<d){
            temp=temp->next;
            counter+=1;
        }
        while(temp->data!=a->data && temp!=NULL){
                //cout<<temp->data<<" temp "<<endl;
            temp=temp->next;
            a=a->next;
        //cout<<b->data<<" b "<<endl;
        }
        if(temp->data==a->data)
        cout<<a->data<<endl;


    }



}



int main(){
node*a=NULL;
node*b=NULL;
int n;
cin>>n;
buildlist(a,n);
int m;
cin>>m;
buildlist(b,m);
intersection(a,n,b,m);

//print(head);





return 0;
}
