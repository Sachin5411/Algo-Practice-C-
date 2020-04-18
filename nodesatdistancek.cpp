#include<iostream>
using namespace std;
#include<queue>

//ERROR

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


node* createtree(int*in,int *pre,int s,int e){
    static int i=0;
    if(s>e){
        return NULL;
    }
    node* root=new node(pre[i]);

    int index=-1;
    for(int j=s;j<=e;j++){
        if(pre[i]==in[j]){
            index=j;
            break;
        }
    }

    i++;
    root->left=createtree(in,pre,s,index-1);
    root->right=createtree(in,pre,index+1,e);
    return root;
}


queue<int> result;

void find(node*root,int k){
    if(root==NULL || k<0){
        return;
    }
    //int i=0;
    if(k==0){
        cout<<root->data<<" ";
        //result.push(root->data);
        return;
    }
    find(root->left,k-1);
    find(root->right,k-1);

}


int findnode(node*root,int k,int target){
    if(root==NULL){
        return -1;
    }
    if(root->data==target){
        find(root->left,k);
        find(root->right,k);
        return 0;

    }
    int l=findnode(root->left,k,target);
    if(l!=-1){
        if(l+1==k){
            cout<<root->data<<" ";
            //result.push(root->data);
        }
        //find(root->left,k-l-1,0);
        find(root->right,k-l-2);
        return l+1;
    }
    int r=findnode(root->right,k,target);
    if(r!=-1){
        if(r+1==k){
            cout<<root->data<<" ";
            //result.push(root->data);
        }
        find(root->left,k-r-2);
        //find(root->right,k-r-1,0);
        return r+1;
    }
        return -1;
}



int main(){

int in[10005],pre[10005];
int n,m;
cin>>n;
for(int i=0;i<n;i++){
    cin>>pre[i];
}
for(int i=0;i<n;i++){
    cin>>in[i];
}
node* root=createtree(in,pre,0,n-1);
int k,target,t;
cin>>t;
while(t--){
    cin>>target>>k;
    findnode(root,k,target);
   /* while(!result.empty()){
        cout<<result.front()<<" ";
        result.pop();
    }*/
    cout<<endl;
}





return 0;}
