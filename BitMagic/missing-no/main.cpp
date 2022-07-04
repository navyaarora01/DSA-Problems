// given an array of num of size n having n+1 elements and one element is  missing ....find the missing element
#include <iostream>
#include <stdio.h>
using namespace std;
 int missingelem(int arr[] , int n){
     int xornum = 0;
     
     for(int i=1;i<=n+1;i++){
         xornum = xornum^i;
     } 
     int ans  = xornum;
     for(int i=0;i<n;i++){
         ans  = ans ^ arr[i];
     }
     return ans;
 }

int main()
{int n;
cin>> n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<missingelem(arr, n)<<endl;
}


