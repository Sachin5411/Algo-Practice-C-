#include<iostream>
using namespace std;
#include<string>

//passed all the cases on CB.....but not giving req. output for abcxxbs

void movexatend(string s,int n,int i){

    if(i==n){
        cout<<s;
        return;
    }

    if(s[i]=='x'){
        s=s.substr(0,i)+s.substr(i+1,n)+"x";
        //cout<<s<<endl;
        //movexatend(s,n,i);
    }

        movexatend(s,n,i+1);
//return s;
}


int main(){

string s;
cin>>s;
int n=s.length();
movexatend(s,n,0);



return 0;
}
