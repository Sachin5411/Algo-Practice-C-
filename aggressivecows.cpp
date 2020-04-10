#include<iostream>
#include<algorithm>
using namespace std;

//3 Cases passed

bool ispossible(long long int a[] ,long int max_dis,long int c,long int n){
        long int i=1,j=0,cows=c-1;

        while(true){
            if(i==n && cows!=0){
                return false;
        }
        if(cows==0){
                return true;
        }
        if(a[i]-a[j]>=max_dis){
            j=i;
            i++;
            cows--;
        }
        else{
            i++;
        }

        }

}


int aggressivecows(long long int a[],long int n,long int c){
    long int s=0,i=n-1,ans=0;
    while(i>0){
    int max_dis= a[i]-a[0];
    if(ispossible(a,max_dis,c,n)){
            if(max_dis>ans){
                ans=max_dis;
            }

        i--;
    }
    else{
        i--;
    }
    }
    return ans;

}

int main(){

    long long int a[1000000005];

    long int n, c;
    cin>>n;
    cin>>c;

    for(int i=0;i<n;i++){
            cin>>a[i];}
            sort(a,a+n);

    cout<<aggressivecows(a,n,c);



 return 0;
}
