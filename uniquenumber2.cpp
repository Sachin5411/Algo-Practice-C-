#include<iostream>
using namespace std;


bool istrue(int a,int b){
return a<b;
}

int main(){

int n,a[10005];
cin>>n;
for(int i=0;i<n;i++){

    cin>>a[i];
}

int result=0;


for(int i=0;i<n;i++){
    result=result^a[i];
}
int temp=result;
int counter=0,i;
while(temp>0){
    i=temp&1;
    if(i==1){
        break;
    }
    counter++;
    temp=temp>>1;
}
//cout<<counter<<endl;
int mask=1<<counter;
int firstnumber=0,s;
for(int j=0;j<n;j++)
{
    s=a[j]& mask;
    if(s!=0){
        firstnumber=firstnumber^a[j];
    }
}
int secondnumber=firstnumber^result;

if(istrue(firstnumber,secondnumber)){
    cout<<firstnumber<<" "<<secondnumber;
}
else{
cout<<secondnumber<<" "<<firstnumber;
}




return 0;
}
