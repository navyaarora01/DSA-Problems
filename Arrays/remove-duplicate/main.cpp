#include <iostream>
#include <stdio.h>
using namespace std;
//---------------1st Method-----------
//O(n) time
// O(n) space --------we have created an extra temporary array
/*void removeDuplicate(int arr[] , int n){
    int temp[n];
    int res =1;
    temp[0] = arr[0];
    for(int i=1;i<n;i++){
        if(temp[res-1] != arr[i]){
            temp[res] = arr[i];
            res++;
        }
    }
     cout<<"Elements of array after removing duplicates are"<<endl;
     
    for(int i=0;i<res;i++){
        cout<<temp[i]<<endl;
    }
}*/
//----------------2nd Method----------------
//O(n) time
//O(1) space
void removeDuplicate(int arr[] , int n){
    int res = 1;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[res-1]){
            arr[res] = arr[i];
            res++;
        }
    }
    cout<<"Elements of array after removing duplicates are"<<endl;
    for(int i=0;i<res;i++){
        cout<<arr[i]<<endl;
    }
}
int main()
{
 int n;
 cin>>n;
 int arr[n];
 for(int i = 0;i<n;i++){
     cin>>arr[i];
 }
 removeDuplicate(arr , n);
    return 0;
}
