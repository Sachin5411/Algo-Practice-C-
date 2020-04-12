#include<iostream>
using namespace std;


class node{
public:
    int data;
    node*left;
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

int height(node* root){
    if(root==NULL){
        return 0;
    }
    int lh=height(root->left);
    int rh=height(root->right);

    return(max(lh,rh)+1);

}


void print(node*root,int k){
    if(root==NULL){
        return;
    }
    if(k==1){
        cout<<root->data<<" ";
        return;
    }
    print(root->left,k-1);
    print(root->right,k-1);
    return;

}



int main(){

node *root=NULL;

root=buildtree();
print(root,2);

return 0;}
