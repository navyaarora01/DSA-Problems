#include <iostream>
using namespace std;
class maxHeap{
    public:
     int arr[100];
     int size =0;
     maxHeap(){
         arr[0]=-1;
         size = 0;
     }
    void insert(int val){
         size ++;
         int index = size;
         arr[index] = val;
         while(index>1){
             int parent  = index/2;
             if(arr[parent]<arr[index]){
                 swap(arr[parent], arr[index]);
                 index = parent;
             }
             else{
                 return;
             }
         }
     }
     void delete( ){
          if(size == 0){
              cout<<"nothing to delete"<<endl;
              return ;
          }
          arr[1] = arr[size];
          size -- ;

          int i=1;
          while(i<size){
              int leftIndex = 2*i;
              int rightIndex = 2*i+1;
              if(leftIndex <size && arr[i]<arr[leftIndex]){
                  swap(arr[i] , arr[leftIndex]);
                  i=leftIndex;
              }
              else if(rightIndex <size && arr[i]<arr[rightIndex]){
                   swap(arr[i] , arr[leftIndex]);
                  i=leftIndex; 
              }
              else{
                  return ;
              }
          }
     }

     void print(){
         for(int i=1;i<=size;i++){
             cout<<arr[i]<<" ";
         }
         cout<<endl;
     }
};
int main(){
    maxHeap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();

    h.delete();
    h.print();
    return 0;
}

void heapify(int arr[], int n, int i)  
    {
        int li = 2*i+1;
        int ri = 2*i+2;
        int largest = i;
        if(li<n && arr[li]>arr[largest]){
            largest = li;
        }
        if(ri<n && arr[ri]>arr[largest]){
            largest = ri;
        }
        if(largest!=i){
            swap(arr[i] , arr[largest]);
            heapify(arr , n , largest);
        }
        
    
      
    }

  
    void buildHeap(int arr[], int n)  
    { 

    for(int i=(n-2)/2;i>=0;i--){
        // heapify(arr , n , i);
        heapify(arr , n , i);
    }
    }
   
    
    
    // void heapSort(int arr[], int n)
    // {
    //     buildHeap(arr , n);
    //     for(int i=n-1;i>0;i--){
    //         swap(arr[0], arr[n-1]);
    //         heapify(arr , i , 0);
    //     }
    //     //code here
    // }