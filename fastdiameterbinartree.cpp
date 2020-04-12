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
    node*root=new node(d);

    root->left=buildtree();
    root->right=buildtree();
    return root;
}

class Pair{
public:
    int diameter;
    int height;
};

Pair fastdiameter(node*root){
    Pair p;
    if(root==NULL){
        p.diameter=p.height=0;
        return p;
    }
    Pair left= fastdiameter(root->left);
    Pair right=fastdiameter(root->right);
    p.height=(max(left.height,right.height)+1);
    p.diameter=max(left.height+right.height,max(left.diameter,right.diameter));
    return p;

}


int main(){


node*root=NULL;
root=buildtree();

Pair p=fastdiameter(root);
cout<<p.diameter<<" "<<p.height<<endl;

return 0;}
