#include<iostream>
using namespace std;


int parti(int *a,int s, int e){

    int i=s-1;
    int j=s;
    int p=e;

    while(j<p){
        if(a[j]<a[p]){
            i++;
            swap(a[j],a[i]);
        }
        j++;
    }
    swap(a[i+1],a[p]);
    return i+1;


}





void quicksort(int *a,int s,int e){

    if(s>=e){
        return ;
    }
    int p=parti(a,s,e);
    quicksort(a,s,p-1);
    quicksort(a,p+1,e);
}






int main(){

int a[1005];
int n;
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}


quicksort(a,0,n-1);

for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}

return 0;
}

