#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int number=0;
int convertint(string s,int n,int k){

        if(n<0){
            return number;
        }
    //int smallans=convertint()
    int digit=s[n]-'0';
    //cout<<"digit is "<<digit<<endl;
    number+=digit*pow(10,k);
    //cout<<number<<endl;
    convertint(s,n-1,k+1);
return number;
}



int main(){
string s;
cin>>s;
int n=s.length();
//cout<<s[2];
cout<<convertint(s,n-1,0);




return 0;}
