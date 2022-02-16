#include<iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Elements of sorted array in increasing order are:"<<endl;
    sort( arr,arr+n);
    for(int x:arr){
        cout<<x<<" ";
    }
    //  cout<<"Elements of sorted array in decreasing order are:"<<endl;
    // sort( arr,arr+n , greater <int> );
    // for(int x:arr){
    //     cout<<x<<" ";
    // }
    
    return 0;
}