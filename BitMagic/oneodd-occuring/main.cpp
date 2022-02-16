#include <iostream>
#include <stdio.h>
using namespace std;
// ----------Naive method---------
int oddoccuring( int arr[],int n){
    for(int i=0;i<n;i++){
        int count  = 0;
        for(int j=0;j<n;j++){
            if(arr[j]==arr[i]){
            count++;}
        }
        if(count%2!=0){
           cout<<arr[i]<<endl;
        }
    }
     return 0;
    
}


    

// --------------2nd Method (XOR Method)-------------
// int oddoccuring(int arr[], int n){
//     int result = 0;
//     for(int i=0;i<n;i++){
//         result = result ^ arr[i];
//     }
//     return result;
// }
int main()
{int n;
cin>> n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
oddoccuring(arr, n);
// cout<<oddoccuring(arr, n)<<endl;
}



