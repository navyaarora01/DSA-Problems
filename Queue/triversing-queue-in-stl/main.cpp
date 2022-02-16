#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<int>q;
    q.push(10);       //push wroks as enque()
    q.push(20);
    q.push(30);
    q.push(40);
    cout<<q.size()<<endl; 
    while(q.empty() == false){
        cout<<q.front()<<" "<<q.back()<<endl;
        q.pop();     //pop works as deque()
    }
}