#include<iostream>
using namespace std;
#include<queue>
#include<climits>


class node{
public:
    int data;
    node* left;
    node* right;

    node(int d){
    data=d;
    left=NULL;
    right=NULL;}

};

node* insertinbst(node* root,int data){

    if(root==NULL){
        return new node(data);
    }

    if(data<root->data){
        root->left=insertinbst(root->left,data);
    }
    else{
        root->right=insertinbst(root->right,data);
    }

return root;
}


node* build(){
    node* root=NULL;
    int d;
    cin>>d;
    while(d!=-1){
        root=insertinbst(root,d);
        cin>>d;
    }
    return root;
}

void bfs(node*root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* f=q.front();
        if(f==NULL){
            cout<<endl;
            q.pop();
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{

        cout<<f->data<<" ";
        q.pop();

        if(f->left){
            q.push(f->left);
        }
    if(f->right){
        q.push(f->right);
    }
    //q.push(NULL);
    }
    }
}



class linkedlist{

public:
    node*head;
    node*tail;
};

linkedlist convert(node*root){

    linkedlist l;
    if(root==NULL){
        l.head=l.tail=NULL;
        return l;
    }

    if(root->left==NULL && root->right==NULL){
        l.head=l.tail=root;
        return l;

    }

    if(root->left!=NULL && root->right==NULL){
        linkedlist leftlist=convert(root->left);
        leftlist.tail->right=root;
        l.head=leftlist.head;
        l.tail=root;
        return l;
    }

    if(root->right!=NULL && root->left==NULL){
        linkedlist rightlist=convert(root->right);
        root->right=rightlist.head;
        l.head=root;
        l.tail=rightlist.tail;
        return l;
    }

    linkedlist leftlist=convert(root->left);
    linkedlist rightlist=convert(root->right);

    l.head=leftlist.head;
    leftlist.tail->right=root;
    root->right=rightlist.head;
    l.tail=rightlist.tail;

    return l;

}



int main(){

node* root=build();

//bfs(root);
linkedlist ll= convert(root);


node* temp=ll.head;

while(temp!=NULL){
    cout<<temp->data<<" --> ";
    temp=temp->right;
}
cout<<endl;



return 0;
}
