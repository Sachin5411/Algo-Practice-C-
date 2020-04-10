#include<iostream>
using namespace std;


int main(){

char a[1005][1005];
int r,c,s,k;
cin>>r>>c>>k>>s;
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cin>>a[i][j];
    }
}
bool success=true;
    for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        char ch=a[i][j];

        if(s<k){
            success=false;
            break;
        }

        if(ch=='.'){
        s=s-2;
    }
        else if(ch=='*'){
        s=s+5;
    }

        else{
        break;
        }
        if(j!=c-1){
        s--;
    }
    }

    }
if(success){
    cout<<"Yes"<<endl;
    cout<<s;
}
else{
    cout<<"No";
}

return 0;
}
