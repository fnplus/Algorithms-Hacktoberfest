/// implementation of min heap 
#include<bits/stdc++.h>
using namespace std;
void swap(int *x, int *y) ;
class Minheap{
private:
    int *harr;
    int capacity;
    int heap_size;
public:
    Minheap(int capacity);

    void minHeapify(int);
    // to get parent of node
    // left node 
    //right node
    int parent(int i){return (i-1)/2;}
    int left(int i){return 2*i+1;}
    int right(int i){return 2*i+2;}

    int extractMin();
    void decreaseKey(int i,int new_val);
    // to get the min of all
    int getMin();
    //to delete the key in heap
    void deleteKey(int i);
    // to insert key in heap
    void insertKey(int k);
};
int Minheap::getMin(){
    if(heap_size == 0){
        return INT_MIN;
    }
    return harr[0];
}
void Minheap::deleteKey(int i){
    decreaseKey(i,INT_MIN);
    extractMin();
}
Minheap::Minheap(int capacity){
    this->heap_size = 0;
    this->capacity = capacity;
    harr = new int[capacity];
}
void Minheap::insertKey(int k){
    if(heap_size == capacity){
        cout<<"house full"<<endl;
        return;
    }
    heap_size++;
    int i = heap_size - 1;
    harr[i] = k;
    while(i != 0 && harr[parent(i)] > harr[i]){
        swap(&harr[i],&harr[parent(i)]);
        i = parent(i);
    }
}

void Minheap::decreaseKey(int i,int new_val){
    harr[i] = new_val;
    while(i != 0 && harr[parent(i)] > harr[i]){
        swap(&harr[i],&harr[parent(i)] );
        i = parent(i);
    }
}
int Minheap::extractMin(){
    if(heap_size <= 0){
        return INT_MAX;
    }
    if(heap_size == 1){
        heap_size--;
        return harr[0];
    }
    int ret = harr[0];
    harr[0] = harr[heap_size-1];
    heap_size--;
    minHeapify(0);
    return ret;
}
//heapify function
void Minheap::minHeapify(int i){
    int l = 2*i+1;
    int r = 2*i+2;
    int smallest = i;
    if(l<heap_size && harr[l] < harr[i]){
        smallest = l;
    }
    if(r<heap_size && harr[smallest] > harr[r]){
        smallest = r;
    }
    if(smallest != i){
        swap(&harr[i], &harr[smallest]); 
        minHeapify(smallest);
    }
}
// to swap to int values
void swap(int *x, int *y) 
{ 
    int temp = *x; 
    *x = *y; 
    *y = temp; 
}
int main() 
{ 
    Minheap h(11); 
    h.insertKey(3); 
    h.insertKey(2); 
    h.deleteKey(1); 
    h.insertKey(15); 
    h.insertKey(5); 
    h.insertKey(4); 
    h.insertKey(45); 
    cout << h.extractMin() << " "; 
    cout << h.getMin() << " "; 
    h.decreaseKey(2, 1); 
    cout << h.getMin(); 
    cout<<endl;
    int arr[100];
    for(int i=0,j=100;i<100;i++,j--){
        arr[i] = j;
    }
    // heapSort(arr, 100); 
    for(int i=0;i<100;i++){
        cout<<arr[i]<<" ";
    }
    return 0; 
} 