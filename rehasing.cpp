#include<iostream>
using namespace std;
#include<string>

template <typename T>

class node{
public:
    string key;
    T value;
    node<T> * next;

    node(string k,T val){
        key=k;
        value=val;
        next=NULL;
    }

    ~node(){
        if(next!=NULL){
            delete next;
        }
    }
};

template <typename T>

class hash_table{
private:
    int table_size;
    int current_size;
    node<T>** table;

    int hashfn(string key){
        int index=0;
        int p=1;
        int len=key.length();

        for(int i=0;i<len;i++){
            index=index+(key[i]*p)%table_size;
            index=index%table_size;
            p=(p*27)%table_size;
        }

    return index;
    }



    void rehash(){
     node<T> ** oldtable=table;
     int oldtablesize=table_size;
    table_size=2*table_size;
    table=new node<T>*[table_size];
    for(int i=0;i<table_size;i++){
        table[i]=NULL;
    }

    current_size=0;
    for(int i=0;i<oldtablesize;i++){
        node<T>* temp=oldtable[i];
        while(temp!=NULL){
           insert(temp->key,temp->value);
        temp=temp->next;
        }
        if(oldtable[i]!=NULL){
            delete oldtable[i];
        }

    }
            delete []oldtable;

    }
public:

    hash_table(int m_size=8){
        table_size=m_size;
        current_size=0;
        table=new node<T>*[table_size];

        for(int i=0;i<table_size;i++){
            table[i]=NULL;
        }
    }

    void insert(string k,T val){
        node<T>* n=new node<T>(k,val);
        int index=hashfn(k);

        n->next=table[index];
        table[index]=n;
        current_size++;

        float load_f=current_size/(1.0*table_size);

        if(load_f > 0.8){

            rehash();
        }

    }

    void print(){
        for(int i=0;i<table_size;i++){
            node<T>* temp=table[i];
             cout<<"Index -> "<<i<<" ";
            while(temp!=NULL){

                cout<<temp->key<<" ";
                temp=temp->next;
            }
            cout<<endl;

        }
    }

    T* search(string key){
        int index=hashfn(key);
        node<T> * temp=table[index];
        while(temp!=NULL){
            if(temp->key==key){
                return &temp->value;
            }
            temp=temp->next;
        }
    return NULL;
    }

    T& operator[](string key){
        T* f=search(key);
        if(f==NULL){
            T garbage;
            insert(key,garbage);
            f=search(key);
        }
    return *f;
    }


};



int main(){

hash_table<int> menu_price;
menu_price.insert("Burger",950);
menu_price.insert("Pizza",35);
menu_price.insert("Sphagetti",12);
menu_price.insert("Pepsi",35);
menu_price.insert("Coke",80);

menu_price.print();
int *price=menu_price.search("Pepsi");
if(price!=NULL){
    cout<<*price;
}
else{
    cout<<"Not found";
}

menu_price["Dosa"]=80;
cout<<endl<<menu_price["Dosa"];

}

