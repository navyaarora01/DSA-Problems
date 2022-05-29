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

void insert(int x){
    if(size == cap){
        return;
    }
    size++;
    arr[size-1]=x;
    for(int i=size -1 ; i!=&&arr[parent(i)]>arr[i]){
        swap(arr[i] , arr[parent(i)]);
        i = parent(i);
    }
}
// tc = o(log(size))