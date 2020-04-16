#include<iostream>
using namespace std;
#include<queue>

class node{
public:
    int data;
    node* left;
    node*right;

    node(int d){
    data=d;
    left=NULL;
    right=NULL;
    }
};


node* buildtree(int *a,int s,int e){
    if(s>e){
        return NULL;
    }
    int mid=(s+e)/2;
    node*root=new node(a[mid]);
    root->left=buildtree(a,s,mid-1);
    root->right=buildtree(a,mid+1,e);

  return root;
}
node* insertinbst(node*root ,int data){

    if(root==NULL){
        return new node(data);
    }
    if(data<=root->data)
    {
        root->left=insertinbst(root->left,data);

    }
    else{
        root->right=insertinbst(root->right,data);
    }
    return root;
}

node* build(){
    int n,d;
    cin>>n;
    int i=0;
    node*root=NULL;
    while(i<n){
        cin>>d;
        root=insertinbst(root,d);

        i++;
    }

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
    queue<node *>q;
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





int main()
{
    node* root=NULL;
    int a[1005];
    int n;
    int t;
    cin>>t;
    while(t--){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    root=buildtree(a,0,n-1);

    print(root);
    //
    bfs(root);
    cout<<endl;
    }


    return 0;
}
