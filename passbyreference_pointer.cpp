#include<iostream>
using namespace std;

void increment(int *a){

*a=*a+1;
cout<<"Inside function increment "<<*a;
}


int  main(){
int a=10;
increment(&a);
cout<<endl;
cout<<"Inside main function "<<a;

return 0;
}
