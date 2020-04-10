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


int main(){
node *head=NULL;
buildlist(head);
print(head);
}
