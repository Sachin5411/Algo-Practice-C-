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

node* midpoint(node*head){
    node*slow=head;
    node*fast=head->next;


    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;

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

void print(node*head){
while(head!=NULL){
    cout<<head->data<<" -> ";
    head=head->next;
}
}

node* detectandremovecycle(node*&head){
    node*slow=head;
    node*fast=head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast){
            slow=head;
            node*prev;
            while(slow!=fast){
                //cout<<slow->data<<" -> ";
                slow=slow->next;
                prev=fast;
                fast=fast->next;
            }
           prev->next=NULL;
           //cout<<prev->data;
            //
            return head;
           // print(head);
        //return;
        }
    }
return head;
}

bool detectcycle(node*head){
node*slow=head;
    node*fast=head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast){
                return true;}
    }
    return false;


}

void operator>>(istream& is, node*&head){
    buildlist(head);
}


int main(){
node*head=NULL;
cin>>head;
if(detectcycle(head)){
    cout<<"Cycle Present "<<endl;
}
else{
    cout<<"Cycle not present "<<endl;
}
detectandremovecycle(head);
cout<<"After removing cycle :"<<endl;
print(head);


return 0;
}

