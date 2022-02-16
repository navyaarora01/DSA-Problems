#include <iostream>
#include <stdio.h>
using namespace std;
// .................naive method...........
/*bool sortedArray(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                return false;
            }
        }
       
    } return true;
}*/
// time complexity is O(n^2)
//..................Efficient Method...........
bool sortedArray(int arr[] , int n){
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}  
// time complexity is O(n) and it has constant space complexity (it does not require extra space)
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sortedArray(arr , n)<<endl;

    return 0;
}
