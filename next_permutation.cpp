#include<iostream>
#include<algorithm>
using namespace std;

int main(){
int arr[1005];
int test,n;
cin>>test;
while(test>0){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   next_permutation(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    test--;
}

return 0;}
