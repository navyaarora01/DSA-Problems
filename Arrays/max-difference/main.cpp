//Here we need to find the max difference between two members of an array where j>i
#include <iostream>
#include <limits>
using namespace std;
//********Naive approach********
//Time complexity is O(n^2)
// int maxDiff(int arr[] , int n){
//     int res  = arr[1]-arr[0];
//     for(int i=0;i<n-1;i++){
//         for(int j=i;j<n;j++){
//             res = max(res , arr[j]-arr[i]);
//         }
//     }
//     return res;

// }
//**********effective approach*******
//time complexity is O(n)
int maxDiff(int arr[] , int n){
    int res = arr[1]-arr[0];
    int minVal = arr[0];
    for(int i=1;i<n;i++){
        res = max(res , arr[i]-arr[minVal]);
        minVal = min(minVal , arr[i]);
    }
}
int main(){
    cout<<"ENter the length of an array"<<endl;
    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = maxDiff(arr , n);
    cout<<"max difference is "<<ans<<endl;
}