#include <iostream>
#include <queue> ;
using namespace std;
struct stack{
    queue<int> q1,q2;
    int top(){
        return q1.front();
    }
    int size(){
        return q1.size();
    }
    int pop(){
        int val = q1.front();
        q1.pop();
        return val;
    }
    void push(int x){
        while(q1.empty()==false){
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while(q2.empty()==false){
            q1.push(q2.front());
            q2.pop();
        }
    }
}
//all operations are O(1) except push func which is havong tc O(n)