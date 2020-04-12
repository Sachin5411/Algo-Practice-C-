#include<iostream>
using namespace std;
#include<queue>


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


int sumreplacement(node*root){
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL && root->right==NULL){
        return root->data;
    }

    int leftsum=sumreplacement(root->left);
    int rightsum=sumreplacement(root->right);
    int temp=root->data;
    root->data=leftsum+rightsum;
    return temp+root->data;

}


int main(){


node*root=NULL;
root=buildtree();
bfs(root);
cout<<endl;
sumreplacement(root);
bfs(root);

return 0;}
