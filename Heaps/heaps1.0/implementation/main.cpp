// in case of min heap value of root is always less than the children nodes
//and in heaps at leaf nodes level insertion of nodes should be from left to write ..otherwise it won"t be considered as a binary heap
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