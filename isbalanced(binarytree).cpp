#include<iostream>
using namespace std;
#include<string>
#include<bits/stdc++.h>
class node{

public:
    int data;
    node*left ;
    node* right;

    node(int d){
    data=d;
    left=NULL;
    right=NULL;
    }
};


node* build(){
    int d;
    cin>>d;
    string s;
    cin>>s;
    node* root=new node(d);

    if(s=="true"){
        root->left=build();
    }

    cin>>s;
    if(s=="true"){
        root->right=build();
    }
    return root;
    }

class HBpair{
public:
    int height;
    bool balance;

};
HBpair isbalanced(node* root){
    HBpair p;

    if(root==NULL){
        p.height=0;
        p.balance=true;
        return p;
    }

    HBpair leftbal =isbalanced(root->left);
    HBpair rightbal= isbalanced(root->right);

    p.height=max(leftbal.height,rightbal.height)+1;
    if(abs(leftbal.height-rightbal.height)<=1 &&leftbal.balance==true && rightbal.balance==true){
        p.balance=true;
    }
    else{
        p.balance=false;
    }
    return p;
}




int main(){
 node* root=NULL;
 root=build();

HBpair p=isbalanced(root);
if(p.balance){
    cout<<"true";
}
else{
    cout<<"false";
}





return 0;}
