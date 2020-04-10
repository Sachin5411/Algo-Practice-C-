#include<iostream>
using namespace std;


int main(){
int t,no;
cin>>t;
while(t>0){
    cin>>no;
    int c=0;
    while(no>0){
        if(no&1==1){
            c++;
        }
        no=no>>1;
    }
    cout<<c<<endl;



    t--;
}


return 0;
}
