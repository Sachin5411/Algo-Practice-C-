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



bool check(node* root1,node* root2){

    if(root1==NULL && root2==NULL){
        return true;
    }

    else if(root1==NULL || root2==NULL){
        return false;
    }
    return check(root1->right,root2->right) && check(root1->left,root2->left);

}


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


int main(){

node*root1=build();
node*root2=build();
//bfs(root1);
//cout<<endl;
//bfs(root2);
//cout<<endl;
if(check(root1,root2)){
    cout<<"true";
}
else{
    cout<<"false";
}


return 0;}
