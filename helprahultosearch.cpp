#include<iostream>
using namespace std;



int searchh(int *a,int n,int key){


    int s=0,e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]==key){
            return mid;
        }

        if(  a[s]<= a[mid] ){
                if( key>=a[s]&& key<a[mid]){
                e=mid-1;
                }
                else{

                    s=mid+1;
                }
        }
        if( a[mid]<=a[e]){
                if( key>a[mid] && key<=a[e]){
            s=mid+1;}
            else{
                e=mid-1;
            }
        }
    }

return -1;
}






int main(){
int n,key,a[1005];
cin>>n;

for(int i=0;i<n;i++){
    cin>>a[i];
}
cin>>key;

cout<<searchh(a,n,key);

return 0;
}
