#include<iostream>
using namespace std;

void towerofhanoi(int n,char source,char helper,char destination){


    if(n==0){
        return ;
    }
    towerofhanoi(n-1,source,destination,helper);
    cout<<"Moving "<<n<<" from "<<source<<" to "<<destination<<endl;

    towerofhanoi(n-1,helper,destination,source);

}






int main()
{
    int n;
    cin>>n;
    towerofhanoi(n,'A','B','C');




    return 0;
}
