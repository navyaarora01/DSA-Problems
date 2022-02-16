#include <iostream>
using namespace std;
void reverseArray(int arr[] , int low , int high){
    while(low<high){
        swap(arr[low] , arr[high]);
        high--;
        low++;
    }
}
void leftRotate(int n , int arr[],int d){
    reverseArray(arr , 0 , d-1);
    reverseArray(arr , d , n-1);
    reverseArray(arr , 0 , n-1);
}

int main(){
    cout<<"Enter the length of an array"<<endl;
    int n , x;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number of Rotations to be done"<<endl;
    cin>>x;
    leftRotate(n , arr,x );
    for(int i = 0;i<n; i++){
        cout<<arr[i];
    }
    
    
}
//TC is O(n)
//Space O(1)
