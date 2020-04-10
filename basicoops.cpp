#include<iostream>
#include<string>
#include<cstring>
using namespace std;

class car{
private:
    int price;
public:
    int modelnumber;
    char *name;
    const int tyres;

    void setprice(int p){
        if(p>1000){
        price=p;}
        else{
            price =1000;
        }
        }
    int getprice(){
        return price;
    }
    void start(){
        cout<<"Grrrr....Starting the car "<<name<<endl;
    }
    car():tyres(4){
    cout<<"default constructor is being called "<<endl;}
    car(int p,int m,char *n):tyres(4){
        cout<<"Parameterised constructor is being called "<<endl;
        price=p;
        modelnumber=m;
        int length=strlen(n)+1;
        name=new char[length+1];
        strcpy(name,n);
    }
    //Deep copy
    car(car &X):tyres(X.tyres){
        cout<<"Copy constructor "<<endl<<endl;
        price=X.price;
        modelnumber=X.modelnumber;
        int length=strlen(X.name)+1;
        name=new char[length+1];
        strcpy(name,X.name);

        }
    //copy assignment operator
    void operator=(car &X){
        cout<<"in copy assignment operator "<<endl;
        price=X.price;
        modelnumber=X.modelnumber;
        int length=strlen(X.name)+1;
        name=new char[length+1];
        strcpy(name,X.name);

    }

    void print(){
        cout<<"Model number of the car is "<<modelnumber<<endl;
        cout<<"Price of the car "<<price<<endl;
        cout<<"Name of the Car "<<name<<endl;
        cout<<"Tyres "<<tyres<<endl;
    }

};


int main(){

car c;

c.setprice(-2000);
cout<<c.getprice()<<endl;
car d(5000,10,"BMW");


car e(d);
e.name[0]='G';
d.print();
e.print();

car s(d);
s.print();
s=e;
s.print();
return 0;}
