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
    cout<<endl;
}

node* reverselist(node*head)
{
    node *p=NULL;
    node*n;
    node*c=head;
    while(c!=NULL){
        n=c->next;
        c->next=p;
        p=c;
        c=n;

    }
    head=p;


return head;
}
bool palindrome(node*head){
node*newhead=reverselist(head);
while(head!=NULL){
    if(head->data !=newhead->data){
        return false;
    }
    head=head->next;
    newhead=newhead->next;
}
return true;

}



int main(){
node*head=NULL;

int m;
cin>>m;
buildlist(head,m);
//intersection(a,n,b,m);
//print(head);

//print(newhead);
if(palindrome(head)){
    cout<<"True";
}
else{
    cout<<"False";
}



return 0;
}
