#include<iostream>
using namespace std;



//input = array containing only 0,1,2
int main(){

int a[1005], n;

cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}

int low=0,high=n-1,mid=0;
while(mid<=high){

    if(a[mid]==2){
        swap(a[mid],a[high]);
        //mid++;
        high--;
    }
    if(a[mid]==1){
        mid++;
    }
    if(a[mid]==0){
        swap(a[mid],a[low]);
        low++;
        mid++;
    }
}
for(int i=0;i<n;i++){
    cout<<a[i]<<", ";
}



return 0;
}
