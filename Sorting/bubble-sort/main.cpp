/******************************************************************************

repeatedly swap two adjacent elemnt of  arrays if they are in wrong order.

*******************************************************************************/
// It is  a stable algorithm , here if we  two elemnts
//  have same numeric value that their position is not changed at all
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{int n;
cin>> n;
int arr[n];
for(int i=0;i<n;i++){
    cin>> arr[i];
    
}
for(int i=0;i<n;i++){
    cout<< arr[i]<<" ";
}
cout<<endl;
int count = 0;
int iteration =1;
while(iteration<n){   /* as there will be n-1 iterations for evry n  elements of  arrays*/
for(int i=0;i<n-iteration;i++){ /*we will go to n-iteration times till we reach the last array element to be sorted through out the array */
  if(arr[i]>arr[i+1]){ 
      int temp=arr[i];
      arr[i]=arr[i+1];
      arr[i+1]= temp;
      count++;
  }
   
}
iteration++;
    
}
cout<<"sorted array is :"<<endl;
for(int i=0;i<n;i++){
    cout<< arr[i]<<" ";
}
cout<<"count = "<<count;
return 0;
}
//tc == n*(n-i)/2
// so tc == O(n^2)