#include <iostream>
using namespace std;
void leftRotate(int n , int arr[] , int d){
   
        int temp[d];
        for(int i =0 ;i<d;i++){ //tc O(d)
         temp[i] = arr[i];   
        }
        for(int i=d;i<n;i++){  //tc O(n-d)
            arr[i-d] = arr[i];
        }
        for(int i =0;i<d;i++){  // tc O(d)
            arr[n-d-i] =temp [i];
        }
        for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
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
    
    
}
// total TC = O(d+n-d+d) = O(n+d) 
