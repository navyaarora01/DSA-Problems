#include <iostream>
#include <stdio.h>

using namespace std;
//------first Method-----------
//O(n^2) time
/*void moveZeroes(int arr[], int n){
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            for(int j=i+1;i<n;j++){
                if(arr[j]!=0){
                    swap(arr[i],arr[j]);
                }
            }
        }
    }
    cout<<"Elements of new array are:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
       }
    
    }*/
  
//---------------Second Method------------
// O(n) time
//O(1) space
void moveZeroes(int arr[] ,int n){
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i], arr[count]);
            count++;
        }
    }
    cout<<"Elemnts of new array are :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main()
{
    cout<<"enter a number"<<endl;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    moveZeroes(arr , n);

    // return 0;
}

