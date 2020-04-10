#include<iostream>
#include<cstring>
using namespace std;


int main(){
string s0;
string s1="Hello";
string s2(s1);
char a[]={'a','b','c','\0'};
string s3=a;
string s4=s1;

cout<<s0<<endl;
cout<<s1<<endl;
cout<<s2<<endl;
cout<<s3<<endl;
cout<<s4<<endl;

if(s0.empty())
{
    cout<<"S0 is empty string "<<endl;
}
s0.append("I love c++");  //to append in the string
cout<<s0<<endl;
s0+=" and python";        //also to append in the string
cout<<s0<<endl;

cout<<s0.length()<<endl;
s0.clear(); //delete all
cout<<s0.length()<<endl;

string s5="Apple";
string s6="Mango";
cout<<s5.compare(s6)<<endl;

string s7="I want to have Apple juice";

int idx=s7.find("Apple");  //to find in the string
cout<<idx<<endl;

string word="Apple";
int len=word.length();  //to find length of a string
cout<<s7<<endl;
s7.erase(idx,len+1);      // to erase from string
cout<<s7<<endl;



for(int i=0;i<s1.length();i++)
{
    cout<<s1[i]<<"-";
    }

//iteratot

return 0;
}
