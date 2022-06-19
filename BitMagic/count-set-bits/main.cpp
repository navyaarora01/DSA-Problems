#include <stdio.h>
#include <iostream>
using namespace std;
//---------naive method-----
// int countsetbits(int n){
//     int res=0;
//   while(n>0){ 
//       if(n%2!=0){
//         res++;
//     }
//     n=n/2;}
//     return res;
// }
//--------2nd method---(by bit manipulation)
// int countsetbits(int n){
//     int res=0;
//   while(n>0){ 
//       if((n&1)==1){
//         res++;
//     }
//     n=n>>1;}
//     return res;
// }
//--------3nd method---(by bit manipulation)
// int countsetbits(int n){
//     int res=0;
//   while(n>0){ 
//       res = res+(n&1);
    
//     n=n>>1;}
//     return res;
// }
//--------4th method---(by Brian Kerningan's Algo)
int countsetbits(int n){
    int res=0;
   while(n>0){ 
      n=n&(n-1);
      res++;}
    return res;
}
int main()
{int n;
cin>> n;
cout<<countsetbits(n)<<endl;
    return 0;
}

