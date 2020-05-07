#include<iostream>
#include<unordered_map>
using namespace std;
class node{
public:
    char data;
    unordered_map<char,node*> children;
    bool terminal;
    node(char d){
    data=d;
    terminal=false;
    }
};


class trie{
    public:
    node* root;
    int count;

    trie(){
        root=new node('\0');
        count=0;
    }

    void insert(char *w){
        node*temp=root;
        for(int i=0;w[i]!='\0';i++){
            if(temp->children.count(w[i])){
                temp=temp->children[w[i]];
            }
            else{
                node *n=new node(w[i]);
                temp->children[w[i]]=n;
                temp=n;
            }
        }
        temp->terminal=true;
    }

    bool find(char *w){
    node*temp=root;
        for(int i=0;w[i]!='\0';i++){
            if(temp->children.count(w[i])==0){
                return false;
            }
            else{
               temp=temp->children[w[i]];
            }
        }
        return temp->terminal;
    }
};



int main(){

trie root;
char words[][10]={"hello","new","news","apple"};

for (int i=0;i<4;i++){
    root.insert(words[i]);
}
char  w[10];
cin>>w;
if(root.find(w)){
    cout<<"Present"<<endl;
}
else{
    cout<<"Not present  "<<endl;
}


return 0;
}
