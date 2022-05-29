
#include <iostream>
#include <climits>
using namespace std;
/* Time complexity = O(logn)
   Auxilary Space = O(1)     Noe extra spce is required
   As recursive call require extra log n space so iterative solution is better than recursive one
*/
int binarySearch(int arr[],int n,int key){
   int s = 0;
   int e = n-1;
   
   while(s<=e){
       int mid = (s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(key>mid){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
}
int main()
{ int n;
cin>> n;
int array[n];
for(int i=0;i<n;i++){
    cin>> array[i];
    
}
for(int i=0;i<n;i++){
    cout<< array[i]<<" ";
    
}
cout<<" "<<endl;
int k;
cout<<"Enter the number to be searched"<<endl;
cin>> k;
cout<<binarySearch(array,n,k)<<endl;
return 0;
}

