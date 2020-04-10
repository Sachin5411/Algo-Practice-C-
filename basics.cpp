#include<iostream>
using namespace std;

int main(){
int x=10;
char ch= 'A';
cout<<"Address of x is "<<&x<<endl;
cout<<"dereferencing of x is "<<*&x<<endl;
cout<<"Address of ch is "<<(void *)&ch;

int *y;
y=&x;
cout<<endl<<"Dereference operator on a pointer y "<<*y;
cout<<endl<<"Address of pointer y is "<<&y<<endl;
cout<<"pointer y is pointing to x at address "<<y<<endl;

return 0;
}
