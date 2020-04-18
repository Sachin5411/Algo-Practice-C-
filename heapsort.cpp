
#include<iostream>
using namespace std;
#include<vector>


void downheapify(vector<int> &heap,int index){
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
    downheapify(heap,largestindex);

    return;
}



void downheapifyhelper(vector<int> &heap,int index,int heap_size){
    if(index==heap.size()-1){
        return;
    }
    int length=heap_size;
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
    downheapifyhelper(heap,largestindex,heap_size);

    return;
}


void buildfromarray(vector<int> &heap){

    for(int i=heap.size()-1;i>=0;i--){
        downheapify(heap,i);
    }

}


void display(vector<int> heap){
    for (int i=0;i<heap.size();i++){
        cout<<heap[i]<<" ";
    }
}

void heapsort(vector<int> &heap){
    int heap_size=heap.size()-1;
    //display(heap);
    cout<<endl;
    for(int i=heap.size()-1;i>=0;i--){

        swap(heap[0],heap[i]);
        heap_size-=1;
        downheapifyhelper(heap,0,heap_size);


    }
}




int main(){

vector<int> heap;
int n;
cin>>n;
for(int i=0;i<n;i++){
    int data;
    cin>>data;
    heap.push_back(data);
}

buildfromarray(heap);

heapsort(heap);
display(heap);




return 0;}
