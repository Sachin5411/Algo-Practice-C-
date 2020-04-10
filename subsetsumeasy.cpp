#include <iostream>
using namespace std;

// copied

bool subset(int *a, int n, int i, int sum,int cnt)
{
    if(i==n)
    {
        if(sum==0 && cnt>0)
        return true;
        else
        return false;
    }
    /*
for(int j=i;j<n;j++){
    cout<<a[j]<<" ";
}
cout<<endl<<"sum is "<<sum<<" count is "<<cnt<<endl;*/
return subset(a, n, i+1, sum+a[i],cnt+1) || subset(a, n,i+1, sum,cnt);
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n, a[10];
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i];
    if(subset(a,n,0,0,0))
    cout<<"Yes";
    else cout<<"No";
    cout<<endl;
    }
    return 0;
}

