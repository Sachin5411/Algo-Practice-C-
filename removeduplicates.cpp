#include<iostream>
#include<cstring>
using namespace std;

void removeduplicates(char a[]){
int i=1;
int j=0;
 int l=strlen(a);
if (l==0 || l==1 ){
    return;
}
while(i<l){
    if(a[i]==a[j]){
        i++;
    }
    else{
            j++;
        a[j]=a[i];
        i++;
    }

}
a[j+1]='\0';
return;
}


int main(){

char a[100];
cin.getline(a,100);

removeduplicates(a);
cout<<a;
return 0;
}
