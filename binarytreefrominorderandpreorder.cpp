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


node* buildtreefromtrav(int *in,int *pre,int s,int e){
    static int i=0;
    if(s>e){
        return NULL;
    }

    node *root=new node(pre[i]);
    int index=-1;
    for(int j=s;j<e;j++){
        if(pre[j]==in[i]){
                index=j;
            break;
        }

    }
    i++;
    root->left=buildtreefromtrav(in,pre,s,index-1);
    root->right=buildtreefromtrav(in,pre,index,e);
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

int main(){

int in[]={3,2,8,4,1,6,7,5};

int pre[]={1,2,3,4,8,5,6,7};

node* root=buildtreefromtrav(in,pre,0,8);

bfs(root);




return 0;
}
