#include<iostream>
using namespace std;
#include<string>

template<typename T>


class node{
public:
    string key;
    T value;
    node<T>* next;

    node(string k, T v){
        key=k;
        value=v;
        next=NULL;
    }
    ~node(){
        if(next!=NULL){
            delete next;
        }
    }
};


template<typename T>

class hash_table{

    node<T>** table;
    int table_size;
    int current_size;

    int hashfn(string key){
        int index=0;
        int p=1;
        for(int i=0;i<key.length();i++){
            index=index+(key[i]*p)%table_size;
            index=index%table_size;
            p=(p*27)%table_size;
        }
        return index;
    }

public:

    hash_table(int t_size=8){
        table_size=t_size;
        current_size=0;
        table= new node<T>*[table_size];
        for(int i=0;i<table_size;i++){
            table[i]=NULL;
        }
    }

    void insert(string key, T value){

        int index= hashfn(key);

        node<T> * n=new node<T>(key,value);
        //Insert at the head of the linked list
        n->next=table[index];
        table[index]=n;
        current_size++;
    }
    void print(){
        for(int i=0;i<table_size;i++){
            cout<<"Bucket "<<i<<" ";
            node<T> * temp=table[i];
            while(temp!=NULL){
                cout<<temp->key<<" ";
                temp=temp->next;

            }
            cout<<endl;
        }
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


return 0;
}
