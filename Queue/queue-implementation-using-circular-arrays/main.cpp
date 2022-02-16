
struct Queue{
    int cap, size, front ;
    int *arr;
    Queue(int c){
        cap = c;
        size = 0;
        front =0;
        arr = new int[cap];
    }
    
/* Enque:   front  = (front+1)%cap;
               size -- 
*/
/* Deque:   rear  = (front+rear-1)%cap;
              rear = (rear+1)%cap;
              arr[rear = x]
               size ++
               
*/
               
    bool isFull(){
        return (size == cap);
    }
    
    
    bool isEmpty(){
        return (size == 0);
    }
    
  
    int getFront(){
        if(isEmpty()){
            return;
        }
        else{
            return front;
        }
    }
    int getRear(){
        if(isEmpty()){
            return;
        }
        else{
            return (front+size-1);
        }
    }  
    void enque(int x){
        if(isFull()){
            return;
        }
        int rear = getRear();
        rear = (rear+1)%cap;
        arr[rear] = x;
        size++;
    }
    
    
    void deque(){
        if (isEmpty()){
            return;
        }
        front =(front+1)%cap;
        size--;
    }
    
}
//Time complexity is O(1) for all operations
