struct Queue{
    int cap, size ;
    int *arr;
    Queue(int c){
        cap = c;
        size = 0;
        arr = new int[cap];
    }
    
    
    bool isFull(){
        return (size == cap);
    }
    
    
    bool isEmpty(){
        return (size == 0);
    }
    
    
    void enque(int x){
        if(isFull()){
            return;
        }
        arr[size] == x;
        size++;
    }
    
    
    void deque(){
        if (isEmpty()){
            return;
        }
        for(int i=0;i<size;i++){
            arr[i]=arr[i+1];
        }
        size--;
    }
    int getFront(){
        if(isEmpty()){
            return;
        }
        else{
            return arr[0];
        }
    }
    int getRear(){
        if(isEmpty()){
            return;
        }
        else{
            return arr[size-1];
        }
    }
    
}
//Time complexity is O(1) for all operations except dequeue for which tc is O(size)
