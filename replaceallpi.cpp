#include<iostream>

using namespace std;
#include<string>
#include<cstring>

string replaceallpi(string s,int l,int i){

    if(i==l){
        return s;}

    string res=replaceallpi(s,l,i+1);
    //cout<<res<<endl;
    if(s[i]=='p' && s[i+1]=='i'){
        res=res.substr(0,i)+"3.14"+res.substr(i+2,res.length());
    }

return res;
}                                                                       // xpipippixx

int main()
{
    int n;
    cin>>n;

    string s[1005];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    int j=0;

    while(j<n){
        //cout<<s[j]<<" ";
        string a="";
        int l=s[j].length();
        cout<<replaceallpi(s[j],l,0);
        cout<<endl;
        j++;
    }





    return 0;



}
