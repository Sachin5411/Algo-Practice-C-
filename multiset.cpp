    #include<iostream>
    using namespace std;
    #include<string>
    #include<set>

    class person_compare{
    public:
        bool operator()(pair<string,int> p1,pair<string,int> p2){
            return p1.second<p2.second;
        }

    };

    int main(){

    int arr[]={10 ,20,10,12,10,30,20,30};
    int n=sizeof(arr)/sizeof(int);

    multiset<int> m(arr,arr+n);

    m.erase(20);


    for(multiset<int>::iterator it=m.begin();it!=m.end();it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;
    cout<<"Count of 10 is "<<m.count(10);

    pair<multiset<int>::iterator,multiset<int>::iterator> p;

    p=m.equal_range(10);
    cout<<endl;
    for(multiset<int>::iterator it=p.first;it!=p.second;it++){
        cout<<(*it)<<" ";
    }

    cout<<endl<<endl<<"Multiset of custom class "<<endl;


    pair<string,int> p1=make_pair("B",10);
    pair<string,int> p2=make_pair("C",90);
    pair<string,int> p3=make_pair("A",80);
    pair<string,int> p4=make_pair("D",100);

    multiset<pair<string,int>,person_compare > m1;
    m1.insert(p1);
    m1.insert(p2);
    m1.insert(p3);
    m1.insert(p4);

    for(multiset<pair<string,int> >::iterator it=m1.begin();it!=m1.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }



















    return 0;}
