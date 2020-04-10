#include<iostream>
using namespace std;

bool palindrome(int a[],int n){

int s=0,e=n-1;
while(s<=e){
    if(a[s]==a[e]){
        s++;
        e--;
    }
    else{
        return false;
    }
}

return true;
}



int main(){
int n;
cin>>n;
int a[1005];
for(int i=0;i<n;i++){
    cin>>a[i];
}
 if(palindrome(a,n)){
    cout<<"true";
 }
 else{
    cout<<"false";
 }



return 0;
}
