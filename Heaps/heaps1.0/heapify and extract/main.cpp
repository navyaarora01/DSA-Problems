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
// This funcn will just return the minimum value of the heap and in minheap it is root itself
// and in get max of max heap it will also be the root
//tc = O(1)
int getMin(){
    return arr[0];
}
//here we need to extract the min value so we need to remove it form array and then return it
//and similar is the case with max funcn of max heap
//tc= O(log(n))
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
    if(lt<size && arr[lt]<arr[smallest]){
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
//tc
    // in best case it will be 0(1) //if heap is balanced
    // in worst case we have to triverse through whole height so tc is  0(h)
    // so in average case it is O(h)
    //              as h == O(logn)
    //              so tc = o (logn)
//auxilary space  = O(h)
int main(){

}