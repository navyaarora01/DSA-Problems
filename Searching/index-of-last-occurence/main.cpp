#include <iostream>
#include <stdio.h>
using namespace std;
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
  int n ; 
  cin>>n;
  int arr[n];
  for(int i=0;i<n; i++){
      cin>>arr[i];
      
  }
  cout<< "Enter the element to be searched"<<endl;
  int x; 
  cin>>x;
  cout<<lastOccurence(arr , n , x)<<endl;
}

