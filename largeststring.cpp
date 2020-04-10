#include<iostream>
#include<cstring>
using namespace std;


int main(){
int n,ml=0;
cin>>n;
char cs[1000],ms[1000];
cin.get(); //to consume \n after inputting n
for(int i=0;i<n;i++){

    cin.getline(cs,1000);
    int cl= strlen(cs);
    if(cl>ml){
        strcpy(ms,cs); //Either use this function or use a for loop to copy all characters from the string
        ml=cl;
    }


}
cout<<ms;
cout<<ml;

return 0;
}
