#include<iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> dq = {10,2,6,8 0,30};
    auto it = dq.begin();
    it++;
    dq.insert(it , 20);
    dq.pop_front();
    dq.pop_back();
    cout<<dq.size()<<endl;
    return 0;
}