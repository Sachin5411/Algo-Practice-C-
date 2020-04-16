#include<iostream>
using namespace std;
#include<queue>
#include<string>

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


node* build(){
    int d;
    string s;
    cin>>d;
    node* root=new node(d);
    cin>>s;
    if(s=="true"){
        root->left=build();
    }
    cin>>s;
    if(s=="true"){
        root->right=build();
    }
    return root;
}

int height(node* root){
    if(root==NULL){
        return 0;
    }
    int lh=height(root->left);
    int rh=height(root->right);

    return max(lh,rh)+1;
}



void printkthlevel1(node* root,int level){
    if (root==NULL){
        return;
    }
    if(level==1){
        cout<<root->data<<" ";
        return;
    }
    printkthlevel1(root->left,level-1);
    printkthlevel1(root->right,level-1);
    return;
}
void printkthlevel2(node* root,int level){
    if (root==NULL){
        return;
    }
    if(level==1){
        cout<<root->data<<" ";
        return;
    }
    printkthlevel2(root->right,level-1);
    printkthlevel2(root->left,level-1);
    return;
}

void printzigzag(node* root){

    //int i=1;
    int h=height(root);
    for(int i=1;i<=h;i++){
        if(i%2!=0){
            printkthlevel1(root,i);
        }
        else{
            printkthlevel2(root,i);
        }
    }
}




int main(){

node* root=build();

printzigzag(root);


return 0;
}
