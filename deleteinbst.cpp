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
    int n,data;

    cin>>n;
    int i=0;
    node* root=NULL;
    while(i<n){
            cin>>data;
        root=insertintree(root,data);
        i++;
    }
    return root;
}

void print(node *root){
    if(root==NULL){
        return;
    }
    //print(root->left);
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);

}


node* deletion(node*root, int data){
    if(root==NULL){
        return NULL;
    }
    if(data<root->data){
        root->left=deletion(root->left,data);
        return root;
    }
    if(data==root->data){
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }

        if(root->left!=NULL && root->right==NULL){
            node*temp=root->left;
            delete root;
            return temp;
        }
        if(root->right!=NULL && root->left==NULL){
            node* temp=root->right;
            delete root;
            return temp;
        }
        //for 2 children
        else{
        node *replace = root->right;
        while(replace->left!=NULL){
            replace=replace->left;
        }
        root->data=replace->data;

        root->right=deletion(root->right,replace->data);
        return root;
        }



    }
    else{
        root->right=deletion(root->right,data);
        return root;
    }
}



int main(){
int t;
cin>>t;
while(t--){
node* root=build();

int m;
cin>>m;
for(int i=0;i<m;i++){
    int key;
    cin>>key;
    root=deletion(root,key);
}
//root=deletion(root,s);

print(root);
cout<<endl;
}


return 0;}

