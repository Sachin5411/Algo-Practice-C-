#include<iostream>
using namespace std;


int main(){
char c;
cin>>c;
int s =int(c);

if(s>=97 && s<=122){
    cout<<"lowercase";
}

else if(s>=65 && s<=90){
    cout<<"Uppercase";
}

else{
    cout<<"Invalid";
}


return 0;
}
