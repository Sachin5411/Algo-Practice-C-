#include<iostream>
#include<cstring>
using namespace std;


void print(char a[], int i){
    int counter=0;
    while(i>0){
        int j=i&1;
        if(j==1){
            cout<<a[counter];
            //counter++;
        }
        counter++;
        i=i>>1;
    }
    cout<<endl;

}

void printsub(char a[]){
    int n=strlen(a);
    for(int i=0;i<(1<<n);i++){
        print(a,i);
    }
}



int main()
{
    char a[1005];
    cin>>a;
    printsub(a);


    return 0;
}
