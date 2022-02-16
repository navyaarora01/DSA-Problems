// *****************Very Important***********************

// Given a number n , present first n numbers(in increasing order) 
// such that all these nummbers in set 5,6
#include <iostream>
#include <queue>
using namespace std;
void printFirstN(int n){
    queue<string> q;
    q.push("5");
    q.push("6");
    for(int count =0;count<n;count++){
        string curr = q.front();
        cout<<curr<<" ";
        q.pop();
        q.push(curr+"5");
        q.push(curr+"6");
    }
}
int main(){
    int n;
    cin>>n;
    printFirstN(n);
}
// this program has O(n) time complexity