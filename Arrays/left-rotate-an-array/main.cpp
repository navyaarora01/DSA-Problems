#include <iostream>
using namespace std;
void leftRotate(int n , int arr[]){
   
        int temp =arr[0];
        for(int j =1 ; j<n; j++){
            arr[j-1]=arr[j];
        }  
        arr[n-1] = temp;
    cout<<"Elements of an array after rotation are:"<<endl;
    for(int i =0;i<n;i++){
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
    for(int i=0;i<x;i++){     //for Rotations
    leftRotate(n , arr );
    }
}
// TC of  k rotations = k *O(n)
