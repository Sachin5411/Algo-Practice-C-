#include<iostream>
using namespace std;
#include<bits/stdc++.h>


class node{
public:
    int data;
    node *left;
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


class custom{
public:
    bool haskey1;
    bool haskey2;
    node* lca;
};

custom* findlca(node* root, node* p,node* q)
{
    if(root==NULL){
        return NULL;
    }
    custom* leftans=findlca(root->left,p,q);
    if(leftans!=NULL && leftans->lca!=NULL){
        return leftans;
    }
    custom* rightans=findlca(root->right,p,q);
    if(rightans!=NULL && rightans->lca!=NULL){
        return rightans;
    }
    custom *result=new custom();
    if(leftans!=NULL && rightans!=NULL){
        result->lca=root;
        result->haskey1=true;
        result->haskey2=true;
        return result;
    }
    else if(root->data==p->data){
        result->haskey1=true;
        result->haskey2=(leftans)?leftans->haskey2:false || (rightans)?rightans->haskey2:false;
        if(result->haskey1  && result->haskey2){
            result->lca=root;
            //result->haskey2=true;
        }
        return result;
    }
    else if(root->data==q->data){
        result->haskey2=true;
        result->haskey1=(leftans)?leftans->haskey1:false || (rightans)?rightans->haskey1:false;
        if(result->haskey1  && result->haskey2){
            result->lca=root;
            //result->haskey2=true;
        }
        return result;
    }

    else if(leftans!=NULL){
        return leftans;
    }
    else if(rightans!=NULL){
        return rightans;
    }
    return NULL;

}



node* lcaofpq(node*root,node*p,node*q){
    custom* result=findlca(root,p,q);

    if(result==NULL) return NULL;
    else{
        return result->lca;
    }
}



int main(){

node * root=NULL;
node * p=new node(3);
node * q=new node(4);

root=buildtree();
node *ans=lcaofpq(root,p,q);
cout<<ans->data;


return 0;
}
