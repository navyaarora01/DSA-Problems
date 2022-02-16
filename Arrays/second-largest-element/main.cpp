#include <iostream>
#include <stdio.h>
using namespace std;
//...................Naive Method.......................
/*int getLargest(int arr[] , int n){
    int largest = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[largest]){
            largest = i;
        }
    }
    return largest;
}
int secondLargest(int arr[] , int n){
    int largest= getLargest( arr , n);
    int seclrgst = -1;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[seclrgst] & arr[i]!=arr[largest]){
            seclrgst = i;                  //we need to return the index only we can't return elemnts.....
        }                               // for elemnts to be returned we need to take initial value of largest elemnt to me INT_MIN
    }
    return seclrgst;
    
}*/
// Time complexity of this solution is O(n^2)...becuase there are two loops one in other
// ............. efficient approach....................
int secondLargest(int arr[] , int n){
    int res = -1 ;                           // This may be possible that there is no secondlargest element if the array contains same elemnts 
    int largest  = 0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[largest]){
            res = largest;
            largest = i;
        }else if(arr[i]!=arr[largest]){   // it means that arr[i]<largest....and there can be 3 cases ..greater ..equal or smaller than seond largest
            if((res==-1)||(arr[i]>arr[res])){  // res==-1 means ...we havent assigned any sec largest num yet 
                res = i;
            }                              // here we didn't write else part coz we ignored all the cases relsted to (arr[i]==arr[largest]) coz everything is going to be same inthis case
        }
    }
    return res;                    // you may also use <<  return arr[res] >>>
}
// Time complexity is O(n) and auxiliary space is O(1)
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<secondLargest(arr , n);
    return 0;
}

