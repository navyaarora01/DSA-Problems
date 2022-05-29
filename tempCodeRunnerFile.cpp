#include <iostream>
#include <queue>
using namespace std;
void showPriorityQueue(priority_queue <int> q){
    while(!q.empty()){
        cout<<q.top()<<endl;
        q.pop();
    }
}
int main(){
    priority_queue <int> q;
    q.push(20);
    q.push(50);
    q.push(30);
    q.push(80);
    q.push(10);
    q.push(5);
    
    cout<<q.size()<<endl;
    cout<<q.empty()<<endl;
    showPriorityQueue(q);
}