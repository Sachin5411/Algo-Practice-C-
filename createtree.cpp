    #include<iostream>
    using namespace std;
    #include<queue>

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

    void printtree(node*root){

        if(root==NULL){
            return;
        }
        if(root->left!=NULL && root->right!=NULL){
            cout<<root->left->data<<" => "<<root->data<<" <= "<<root->right->data<<endl;
        }

        if(root->right!=NULL && root->left==NULL){
            cout<<"END => "<<root->data<<" <= "<<root->right->data<<endl;
        }
        if(root->right==NULL && root->left!=NULL){
            cout<<root->left->data<<" => "<<root->data<<" <= END"<<endl;
        }
        else{
            cout<<"END => "<<root->data<<" <= END"<<endl;
        }

        printtree(root->left);

        printtree(root->right);

    }


    int main(){

    int in[10005],pre[10005];
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>pre[i];
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>in[i];
    }
    node* root=createtree(in,pre,0,n-1);
    printtree(root);
    //bfs(root);
    return 0;}
