#include <iostream>
#include <stdio.h>
using namespace std;
int firstOccurenceR(int arr[] , int key , int low , int high){
    //Recursive approach 
    /*TC = O(logn)
    auxilary space = O(logn) */
    int mid = (low+high)/2;
    if(low > high){
        return -1;
    }
    if(key>arr[mid]){
        return firstOccurenceR(arr , key , mid+1 , high);
    }else if(key<arr[mid]){
        return  firstOccurenceR(arr , key , low , mid-1);
    }
    else{
        if(mid == 0 || arr[mid] != arr[mid-1]){
            return mid;
        }
        else{
            return  firstOccurenceR(arr , key , low , mid-1);
        }
    }
    
}
int firstOccurenceI(int arr[] , int n,int key){
    //Iterative  approach 
    /*TC = O(logn)
    auxilary space = O(1) */
    int low =0;
    int high  = n-1;
    while(low<=high){
    int mid = (low+high)/2;
    
    if(key>arr[mid]){
        low = mid+1;
    }else if(key<arr[mid]){
        high = mid-1;
    }
    else{
        if(mid == 0 || arr[mid] != arr[mid-1]){
            return mid;
        }
        else{
            high = mid-1;
        }
    }
        
    }
    return -1;
    
}
int main()
{
    int n , key;
    cin>>n;
    int arr[n];
    cout << "Enter the elements of sorted array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the Element to be searched in a sorted array"<<endl;
    cin>>key;
    // cout<<firstOccurenceR(arr , key , 0 , n-1);
    cout<<firstOccurenceI(arr , n , key)<<endl;
}

