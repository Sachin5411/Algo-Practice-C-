#include<iostream>
using namespace std;
#include<queue>




// INCOMPLETED





class node{

public:
    int data;
    node*left;
    node*right;

    node(int d){
    data=d;
    left=NULL;
    right=NULL;}
};

node* build(queue<int> q){

    if(q.front()==-1){
        q.pop();
        return NULL;
    }

    node* root=new node(q.front());
    q.pop();
    root->left=build(q);
    root->right=build(q);
    return root;

    }


int main(){




return 0;}
