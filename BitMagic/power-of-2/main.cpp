#include <iostream>
#include <stdio.h>
using namespace std;
//-------Method 1------------
// bool pow2(int n){
//   return ((n!=0)&&(n&(n-1))==0);
// }
//-------Method 2-----------------
bool pow2(int n){
  if(n==0){
      return false;
  }
  return ((n&(n-1))==0);
}
//-------Method 3 (Naive Method)-----
// bool pow2(int n){
//   if(n==0){
//       return false;
//   }
//   while(n!=1){
//       if(n%2!=0){
//           return false;
//       }
//       n=n/2;
//   }
//   return true;
// }
int main()
{
   int n;
   cin>>n;
   cout<<pow2(n)<<endl;

    // return 0;
}
