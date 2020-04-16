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

bool isbst(node* root,int mini=INT_MIN,int maxi=INT_MAX  ){
    if(root==NULL){
        return true;
    }
    if(root->data>=mini && root->data<=maxi && isbst(root->left,mini,root->data) && isbst(root->right,root->data,maxi)){
        return true;
    }
    else{
        return false;
    }

}




int main(){

node* root=build();

//bfs(root);
if(isbst(root)){
    cout<<"Yes";
}
else{
    cout<<"No";
}

return 0;
}
