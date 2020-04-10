#include<iostream>
using namespace std;

int main(){
int a[100005];
int n;
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}

for(int i=0;i<n;i++)
{   int j=i+1;
    while(j!=i){
             j=j%n;
        if(a[j]>a[i]){
            cout<<a[j]<<" ";
            break;
        }
        else{
            j++;
        }

    }
    if(j==i){
        cout<<"-1 ";
    }

}



return 0;}
