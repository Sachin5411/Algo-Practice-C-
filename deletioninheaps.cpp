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
    return;

}

void upheapify(vector<int> &heap,int index){
    if(index==heap.size()-1){
        return;
    }
    int length=heap.size();
    int leftchild=(2*index)+1;
    int rightchild=(2*index)+2;
    if(leftchild>=length && rightchild>=length){
        return;
    }
    int largestindex=index;
    if(leftchild<length && heap[leftchild]>heap[largestindex]){
        largestindex=leftchild;
    }
    if(rightchild<length && heap[rightchild]>heap[largestindex]){
        largestindex=rightchild;
    }
    //
    if(index==largestindex) return;
    swap(heap[largestindex],heap[index]);
    upheapify(heap,largestindex);

    return;
}





void deletioninheap(vector<int> &heap){
    swap(heap[0],heap[heap.size()-1]);
    heap.pop_back();
    upheapify(heap,0);
}



void insertinheap(vector<int> &heap,int data){
    heap.push_back(data);
    heapify(heap,heap.size()-1);

}


void display(vector<int> heap){
    for (int i=0;i<heap.size();i++){
        cout<<heap[i]<<" ";
    }
}

int main(){

vector<int> heap;
int n;
cin>>n;
for(int i=0;i<n;i++){
    int data;
    cin>>data;
    insertinheap(heap,data);
}

display(heap);
deletioninheap(heap);
cout<<endl;
display(heap);

return 0;}
