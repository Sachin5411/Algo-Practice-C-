#include<iostream>
using namespace std;
#include<queue>
class node{

public:
    int data;
    node* left;
    node* right;

    node(int d){
    data=d;
    left=NULL;
    right=NULL;
    }
};

node* insertinbst(node* root,int d){
    if(root==NULL){
        return new node(d);
    }
    if(d<root->data){
        root->left=insertinbst(root->left,d);
    }
    else{
        root->right=insertinbst(root->right,d);
    }
return root;

}

node* build(int* a,int s,int e){
    if(s>e){
        return NULL;
    }

    int mid=(s+e)/2;
    node*root=new node(a[mid]);
    root->left=build(a,s,mid-1);
    root->right=build(a,mid+1,e);
    return root;
}


node* replacesum(node* root){
    static int sum=0;
    if(root==NULL){
        return NULL;
    }


root->right=replacesum(root->right);
sum +=root->data;
root->data=sum;
root->left=replacesum(root->left);


return root;
}



void print(node* root){
    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";
    print(root->left);
    print(root->right);

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

int n,a[10005];
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}

node* root=build(a,0,n-1);

node* root2=replacesum(root);
print(root2);

return 0;}
