#include<iostream>
#include<cstring>

using namespace std;

int main(){
char a[]="bcdecfg";
int curr=1,max_len=1;
int n=strlen(a);
int visited[256];
for(int i=0;i<256;i++){
    visited[i]=-1;
}

visited[a[0]]=0;
for(int i=1;i<n;i++){
    int las_occ=visited[a[i]];
    if(las_occ==-1 || i-curr>las_occ){
            curr+=1;
            //max_len=(max_len,curr)
    }
    else{
        if(max_len<curr){
            max_len=curr;
        }
        curr=i-las_occ;
    }
    if(curr>max_len){
        max_len=curr;
    }
    visited[a[i]]=i;
}
cout<<max_len<<" ";




return 0;}
