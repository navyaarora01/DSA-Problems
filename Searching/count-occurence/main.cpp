#include <iostream>
#include <stdio.h>
using namespace std;
int firstOccurence(int arr[] , int n,int x){
    //Iterative  approach 
    /*TC = O(logn)
    auxilary space = O(1) */
    int low =0;
    int high  = n-1;
    while(low<=high){
    int mid = (low+high)/2;
    
    if(x>arr[mid]){
        low = mid+1;
    }else if(x<arr[mid]){
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
int lastOccurence(int arr[] , int n , int x){
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = (low + high)/2;
        if(x>arr[mid]){
            low = mid+1;
        }
        else if(x<arr[mid]){
            high = mid -1;
        }
        else{
            if(mid == n-1 || arr[mid]!=arr[mid+1]){
                return mid;
            }
            else{
                low = mid+1;
            }
        }
    }
    return -1;
}
int main()
{
    int n , x;
    cin>>n;
    int arr[n];
    cout << "Enter the elements of sorted array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i]; 
    }
    cout<<"Enter the Element to be counted in a sorted array"<<endl;
    cin>>x;
    int first = firstOccurence(arr , n , x);
    int last = lastOccurence (arr , n ,x);
    int count  = last - first + 1;
    cout<<count ;
}


