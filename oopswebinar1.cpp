#include<iostream>
using namespace std;
#include<bits/stdc++.h>

class Complex{

private:
    int real;
    int img;
public:
    Complex(){
    }

    Complex(int r,int i){
        real=r;
        img=i;
    }
    void setreal(int r){
        real=r;

    }

    int getreal(){
    return real;}
    void setimg(int i){
    img=i;}


    void add(Complex &c){
    real+=c.real;
    img+=c.img;
    }

    void operator+(Complex &c)
{
    real+=c.real;
    img+=c.img;
}

void operator>>(istream& is,Complex &c){
    int r,i;
    is>>r;
    is>>i;
    c.setimg(i);
    c.setreal(r);
}
//void  operator<<(ostream )


    void print(){
        if(img>0)
    cout<<real<<" + " <<img<<"i"<<endl;
    else{
        cout<<real<<" - " <<-img<<"i"<<endl;
    }}




};


int main(){



Complex c1(2,3);
Complex c2;
c2.setreal(4);
c2.setimg(6);
c1.print();
c2.print();
//c1.add(c2);
//c1.print();
c1+c2;
c1.print();


Complex c3;
cin>>c3;
c3.print();















return 0;}
