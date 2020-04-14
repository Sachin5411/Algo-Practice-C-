#include<iostream>
using namespace std;
#include<queue>

class node{
public:
    int data;
    node* left;
    node*right;

    node(int d){
    data=d;
    left=NULL;
    right=NULL;
    }
};


node* buildtree(){

    int d;
    cin>>d;
    if(d==-1){
        return NULL;
    }
    node* root=new node(d);
    root->left=buildtree();
    root->right=buildtree();
return root;
}

node* prev=NULL;

void converttolist(node* root ,node **head){

    if(root==NULL){
        return;
    }
    cout<<"Executing left node "<<root->data<<endl;
    converttolist(root->left,head);

    //static node *head;
    if(prev==NULL){
        *head=root;
    }
    else{
        root->left=prev;
        prev->right=root;
        //root->right=prev;
    }
    prev=root;
    cout<<"Prev node is "<<prev->data<<endl ;
        cout<<"Executing right node "<<root->data<<endl;

    converttolist(root->right,head);
    //return root;

}

void print(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
    head=head->right;
    }

}

int main(){

node*root=NULL;
node*head=NULL;
root=buildtree();
converttolist(root,&head);


print(head);
return 0;}
