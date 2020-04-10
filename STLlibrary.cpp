//Basics of stl library


#include<iostream>
#include<algorithm>
using namespace std;


int main(){


int arr[]={1 ,2 ,5 ,6 ,8 ,9};
int n=sizeof(arr)/sizeof(int);
int key=6;
//to search in any container such as array or vector
auto address =find(arr,arr+n,key); // runnning fine on coding blocks ide
int index=index-arr;
if(index==n){
    cout<<"Key not present "<<endl;
}
else{
    cout<<"Key present at index "<<index<<endl;
}



return 0;
}
