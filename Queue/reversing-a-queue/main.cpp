#include<iostream>
#include<stack>
#include<queue>
using namespace std;
//********Iterative Approach*******
void reversingQueue(queue<int> &q){
    stack<int> s;
    while(q.empty()==false){
        s.push(q.front());
        q.pop();
    }
    while(s.empty()==false){
        q.push(s.top());
        s.pop();
    }
    while(!q.empty()){
      cout<<q.front()<<endl;;
        q.pop();
    }
}
// *****************
// queue reverseFunction(queue)
// {
//     if (queue.empty()==true)
//       return queue;
//     else {
//       data = queue.front()
//       queue.pop()
//       queue = reverseFunction(queue);
//       q.push(data);
//       return queue;
//     }
// }



// ****************
//***REcursive Approach*********
// void reverse(queue<int> q){
//     if(q.empty()==true){
//         return;
//     }
//     int x = q.front();
//     q.pop();
//     reverse(q);
//     q.push(x);
//     cout<<q.front();
//     while(q.empty()==false){
//       cout<<q.front()<<endl;;
//         q.pop();
//     }
// }

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    reversingQueue(q);
    // reverse(q);
    // q = reverseFunction(q);
    // while(q.empty()==false){
    //   cout<<q.front()<<endl;;
    //     q.pop();
    // }
    // return 0;
}

 // There is front function is used in queue and top function used in stack