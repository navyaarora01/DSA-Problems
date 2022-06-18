/******************************************************************************
Insert an element from unsorted array to its correct position in sorted array
Bassically we will create a new empty array and one by one we will shift the 
element from previous array to the new sorted array and the previous array will
be decreased and the new array will be increased

*******************************************************************************/
#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
int n;
cin>> n;
int arr[n];
for(int i=0;i<n;i++){
    cin>> arr[i];
    
}
for(int i=0;i<n;i++){
    cout<< arr[i]<<" ";
}
cout<<endl;
for(int i=1;i<n;i++){ /*we will start from second elemnt in the array ...considering first to be already sorted*/
    int current = arr[i];
    int j = i-1;
   while(arr[j]>current && j>=0){
       arr[j+1]=arr[j];
       j--;
   }
   arr[j+1]=current; /*Here j+1 is actually j we wrote it j+1 because in above line
   we decreased the j by one so we need to put the value of current at its right position which os j+1(actually j)*/
}
for(int i=0;i<n;i++){
    cout<< arr[i]<<" ";
}
return 0;
}

