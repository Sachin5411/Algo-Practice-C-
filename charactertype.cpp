#include<iostream>
using namespace std;

char type(char c){

	int s =int(c);

if(s>=97 && s<=122){
    return 'L';
}

else if(s>=65 && s<=90){
    return 'U';
}

return 'I';
}

int main(){
char c;
cin>>c;


cout<<type(c);
return 0;
}

