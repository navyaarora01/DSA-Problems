#include <iostream>
#include <stdio.h>
using namespace std;
// ----------Naive method---------
// int oddoccuring( int arr[],int n){
//     for(int i=0;i<n;i++){
//         int count  = 0;
//         for(int j=0;j<n;j++){
//             if(arr[j]==arr[i]){
//             count++;}
//         }
//         if(count%2!=0){
//           cout<<arr[i]<<endl;
//         }
//     }
//      return 0;
    
// }


// --------------2nd Method (XOR Method)-------------
void oddoccuring(int arr[], int n){
    int XOR = 0;
    int res1 = 0;
    int res2 = 0;
    for(int i=0;i<n;i++){
        XOR = XOR ^ arr[i];
    }
    int sn = XOR & ~(XOR-1);   //sn means last set bit
    for(int i=0;i<n;i++){
        if((sn&arr[i])!=0){
            res1=res1^arr[i];
        }
        else{
            res2 = res2^arr[i];
        }
    }
    cout<<"So two odd occuring numbers are"<<endl;
    cout<<res1<<endl;
    cout<<res2<<endl;
   
}
int main()
{int n;
cin>> n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i] ;
}

oddoccuring(arr, n);
// cout<<oddoccuring(arr, n)<<endl;
}




