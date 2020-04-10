
#include<iostream>
using namespace std;

//1 case failed


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

void evenafterodd(node*&head){
    node*a=head;
    node*b=head->next;
    while(b!=NULL){
        if((a->data)%2==0 ){


            swap(a->data,b->data);
            //a=a->next;
            b=b->next;
        }

        else{
            a=a->next;
            b=b->next;
        }
    }


}



int main(){
node*head=NULL;
int n;
cin>>n;

buildlist(head,n);
evenafterodd(head);
print(head);

return 0;
}


