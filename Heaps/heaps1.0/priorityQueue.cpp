#include <bits/stdc++.h>
#include <queue>

using namespace std;
int main(){
    priority_queue <int > pq;
    priority_queue <int , vector<int> , greater<int> > pq;  //for min heap
    pq.push(10);
    pq.push(2);
    pq.push(32);
    pq.push(65);
    pq.push(76);
    pq.push(56);
    pq.push(4);
    pq.push(9);
    while(!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
    }

}