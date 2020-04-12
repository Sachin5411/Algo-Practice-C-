#include<iostream>
using namespace std;
#include<queue>
#include <cstdlib>

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

class Pair{
public:
    int height;
    bool balance;
};

Pair heightbalance(node*root){
    Pair p;
    if(root==NULL){
        p.height=0;
        p.balance=true;
        return p;
    }

    Pair leftbal=heightbalance(root->left);
    Pair rightbal=heightbalance(root->right);

    p.height = (1+max(leftbal.height,rightbal.height));
    if(abs(leftbal.height-rightbal.height)<=1 && leftbal.balance==true && rightbal.balance==true){
        p.balance=true;
    }
    else{
        p.balance=false;
    }
    return p;
}




int main(){


node*root=NULL;
root=buildtree();
//bfs(root);
cout<<endl;
//sumreplacement(root);
Pair p=heightbalance(root);
cout<<p.height<<" "<<p.balance;
//bfs(root);

return 0;}

