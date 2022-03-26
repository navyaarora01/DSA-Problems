#include <iostream>
using namespace std;
int partition(int arr[] , int s , int e){
    int i =s-1;
    for(int j=s ; j<e ; j++){
        if(arr[j]<arr[e]){
            i++;
            swap(arr[i] , arr[j]);

        }
    }
    swap(arr[i+1] , arr[e]);
    return (i+1);
    
}
void quickSort(int arr[] , int s , int e){
    if(s<e){
        int pivot = partition(arr  , s , e);
        
        quickSort(arr , s , pivot - 1);
        quickSort(arr , pivot+1, e);
       
    }
}

int main(){
    int n;
    cout<<"Size of array"<<endl;
    
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s,e;
    s = 0;
    e = n-1;
    quickSort(arr , s , e);
    for(int i=s;i<e+1;i++){
        cout<<arr[i]<<" ";
    }
}