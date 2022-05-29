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


int extractMin(){
    if(size == 0){
        return INT16_MAX;
    }
    if(size == 1){
        size--;
        return arr[0];
    }
    swap(arr[0], arr[size-1]);
    size--;
    minHeapify(0);
    return arr[size];
}
//min heap means the parent is always less than the left and right
void minHeapify(int i){
    int lt = left(i) ;
    int rt = right(i);
    int smallest = i;        //here we are considering the indexes
    if(lt<size && arr[lt]<arr[i]){
        smallest = lt;
    }
    if(rt<size && arr[rt]<arr[smallest]){
        smallest = rt;
    }
    if(smallest!=i){
        swap(arr[i] , arr[smallest]);
        minHeapify(smallest);
    }
}


// this func take the index and the the value and will change the value at the given index and and then heapify it 
//tc = O(h)
void decreaseKey(int i , int x){
    arr[i] == x;
    if(i!=0 && arr[parent(i)]>arr[i]){
        swap(arr[i] , arr[parent(i)]);
        i = parent(i);
    }
}

//delete key function helps in deleting the key from anywher ein the stack
// firstly we will use decrese key function(index, -infinity)  so the node will reach on the zeroth index and then 
// we will use extract min functin and remove the root and then heapify it
//as all the operations take O(logn)
// so tc = o(logn)
void deleteKey(int i){
    decreaseKey(5 , -infinity);
    extractMin();
}