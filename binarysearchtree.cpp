#include<iostream>
using namespace std;

class node{

public:
    int data;
    node* left=NULL;
    node* right=NULL;

    node(int d){
    data=d;
    left=NULL;
    right=NULL;
    }
};

node * insertintree(node* root, int d){
    if(root==NULL){
        return new node(d);
    }
    if(d<=root->data){

    root->left=insertintree(root->left,d);
    }
    else{
        root->right=insertintree(root->right,d);
    }

    return root;

}


node* build(){
    int d;
    cin>>d;
    node* root=NULL;
    while(d!=-1){
        root=insertintree(root,d);
        cin>>d;
    }
    return root;
}

void print(node *root){
    if(root==NULL){
        return;
    }
    print(root->left);
    cout<<root->data<<" ";

    print(root->right);

}

bool searchintree(node *root,int key){
    if(root==NULL){
        return false;
    }
    if(key==root->data){
        return true;
    }
    if(key<root->data){
        searchintree(root->left,key);
    }
    else{
        searchintree(root->right,key);
    }

}


int main(){
node* root=build();
print(root);
cout<<endl;
if(searchintree(root,5)){
    cout<<"Present";
}
else{
    cout<<"Not present ";
}


return 0;}
