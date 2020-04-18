#include<iostream>
using namespace std;
#include<vector>

void heapify(vector<int> &heap,int index){

    if(index==0){
        return;
    }
    int parent=(index-1)/2;
    if(heap[parent]<=heap[index]){
        swap(heap[parent],heap[index]);
        heapify(heap,parent);
    }
    else{
        return;
    }
}

void insert(vector<int> &heap,int value){
    heap.push_back(value);
    heapify(heap,heap.size()-1);

}

void display(vector<int> heap){

    for(int i=0;i<heap.size();i++){
        cout<<heap[i]<<" ";
    }
}


int main(){

vector<int> heap;
int n;
cin>>n;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    insert(heap,x);
}

display(heap);




return 0;}
