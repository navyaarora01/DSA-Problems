#include <iostream>
using namespace std;
class minHeap(){
    int arr[];
    int size;
    int cap;
    MinHeap(int c){
        arr= new int[c];
        cap = c;
        size  = 0;
    }
    int left(int i){
        return (2*i+1);
    }
    int right(int i){
        return (2*i+2);
    }
    int parent(int i){
        return (i-1)/2;
    }
}

//take a random array  and rearrange to from the min heap
void buildHeap(){
    for(int i=(size-2)/2;i>=0;i++){
        minHeapify(i);
    }
}
