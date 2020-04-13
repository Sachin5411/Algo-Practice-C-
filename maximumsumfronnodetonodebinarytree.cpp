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

int max_sum=INT_MIN;

int findsum(node *root){

    if(root==NULL){
        return 0;
    }

    int leftsum=findsum(root->left);
    int rightsum=findsum(root->right);



    int case4=leftsum + root->data + rightsum;
    int case2=leftsum + root->data;
    int case3=root->data + rightsum;
    int case1=root->data;

    max_sum=max(case1,max(case2,max(case3,max(case4,max_sum))));
    //cout<<max_sum<<endl;
    return max(leftsum,max(rightsum,0))+root->data;
}


int main(){

node *root=NULL;
root=buildtree();
findsum(root);
cout<<max_sum;

return 0;}
