#include<iostream>
using namespace std;

void getchar(char a[],int maxlen, char delim='\n' ){

int i=0;
char ch=cin.get();
while(ch!=delim){

    if(i==(maxlen-1)){
        break;
    }
    a[i]=ch;
    ch=cin.get();

        i++;

}
a[i]='\0';
}


int main(){

char ch[1000];

//getchar(ch,1000,'$');
cin.getline(ch,1000);
cout<<ch;

}
