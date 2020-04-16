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

void printinrange(node* root,int low,int high){

    if(root==NULL){
        return;
    }
    printinrange(root->left,low,high);
    if(root->data>=low && root->data<=high){
        cout<<root->data<<" ";
    }
    printinrange(root->right,low ,high);

}



void print(node* root){

    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    print(root->left);

    print(root->right);

}


int main()
{
    int t;
    cin>>t;
    while(t--){
    node* root=NULL;

    root=build();
    int low,high;
    cin>>low>>high;
    cout<<"# Preorder : ";
    print(root);
    cout<<endl;
    cout<<"# Nodes within range are : ";
    printinrange(root,low,high);
    cout<<endl;
    }
    return 0;
}

