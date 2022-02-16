#include <iostream>
using namespace std;
void printFreq(int arr[], int n){
    int freq = 1;int i=1;
    while(i<n){
        while(i<n && arr[i-1] == arr[i]){
            freq++;
            i++;
        }
        cout<<"Frequencies of elemnts of an array are"<<endl;
        cout<<arr[i-1]<<"  "<<freq<<endl;
        i++;
        freq =1;
    }
    if(n==1 || arr[n-1] !=arr[n-2]){
        cout<<arr[n-1]<<"  "<<freq<<endl;
    }
}
int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printFreq(arr , n);
}