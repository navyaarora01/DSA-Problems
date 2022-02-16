#include <iostream>
#include <stdio.h>
using namespace std;
void getLargest(int arr[] , int n){
    for(int i=0;i<n;i++){
       bool flag = true;
       for(int j=0;i<n;j++){
           if(arr[j]> arr[i]){
               flag = false;
               break;
           }
       }
      if (flag==true){
          cout<< i<<endl;
       }
    } 
  //return -1;
} 
//time complexity is O(n^2)
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    getLargest(arr , n);

    return 0;
}
