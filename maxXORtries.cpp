#include<iostream>
#include<climits>

#include<cmath>
using namespace std;


class trienode{
public:
    trienode* left;
    trienode* right;
};

void insert(int n,trienode* head){
    trienode*current=head;
    for(int i=31;i>=0;i--){
        int bit=(n>>i)&1;
        if(bit==0){
            if(current->left!=NULL){
                current=current->left;
            }
            else{
                current->left=new trienode();
            }
        }
        else{
            if(current->right!=NULL){
                current=current->right;
            }
            else{
                current->right=new trienode();
            }
        }

    }
}


int findmaxXOR(int element,trienode*head){
    int maxXOR=INT_MIN;
    int curXOR=0;
    trienode* current=head;
    for(int i=31;i>=0;i--){
        int cbit=(element>>i)&1;
        if(cbit==0){
            if(current->right!=NULL){
                current=current->right;
                curXOR+=(int)pow(2,i);
            }
            else{
                current=current->left;
            }

        }
        else{
            if(current->left!=NULL){
                current=current->left;
                curXOR+=(int)pow(2,i);
            }
            else{
                current=current->right;
            }
            }}
    if(curXOR>maxXOR){
            maxXOR=curXOR;
        }
   return maxXOR;
}

int main(){
int n;
cin>>n;
int a[1005];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int result=INT_MIN;
trienode *head=new trienode();
for(int i=0;i<n;i++){
    insert(a[i],head);
    int x=findmaxXOR(a[i],head);
    if(x>result){
        result=x;
    }
}
cout<<result;

return 0;
}
