#include<iostream>
using namespace std;
#include<vector>
#include<queue>

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

queue<int> q;
void rightview(node *root,int current_level){

    //static
    static int max_level=-1;

    if(root==NULL){
        return;
    }

    if(current_level>max_level){
        max_level=current_level;
        //v.push_back(root->data);
        q.push(root->data);
    }
    rightview(root->right,current_level+1);
    rightview(root->left,current_level+1);
//return v;
}

int main(){

node * root=NULL;
root= buildtree();
rightview(root,0);



while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
}


return 0;
}
