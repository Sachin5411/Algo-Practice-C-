#include<iostream>
#include<cstring>
using namespace std;


bool palindromestring(char a[]){
    int i=0;
    int j= strlen(a)-1;
    while(i<=j){
        if(a[i]==a[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;

}


int main(){
char a[1000];
cin>>a;

if (palindromestring(a)){
    cout<<"yes the string is palindrome "<<endl;
}

else{
    cout<<"Not a palindrome";
}


return 0;
}
