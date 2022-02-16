#include <iostream>
#include <stdio.h>
using namespace std;
/* Time complexity = O(n)
   Auxilary Space = O(log n)  
   As rcursicve call require extra log n space so iterative solution is better than recursive one
*/
int getBSearch(int arr[] , int x , int low , int high){
    if(low>high){
        return -1;
    }
    int mid = (low + high)/2;
    if(arr[mid] == x){
        return mid;
    }
    else if (arr[mid]>x){
        return getBSearch(arr, x , low, mid-1);
    }
    else {
          return getBSearch(arr, x ,mid+1 , high);
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    int x;
    cout<<"Enter the element to be searched"<<endl;
    cin>>x;
    int low = 0;
    int high = n-1;
    cout<<getBSearch(arr , x , low , high)<<endl;

    return 0;
}
 