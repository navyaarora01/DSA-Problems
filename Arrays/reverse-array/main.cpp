#include <iostream>
#include <stdio.h>
using namespace std;
void reverseArray(int arr[],int n){
    int temp;
    int low=0;
    int high = n-1;
    while(low<high){
        temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
    cout<<"Elemnts of Reversed array are :"<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
reverseArray(arr , n);
    return 0;
}
