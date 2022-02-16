
#include <stdio.h>
#include <iostream>
using namespace std;
//using right shift opertor (first method)
// bool kthbit( int n, int k){
//     if(((n>>(k-1))& 1)==1){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
//using left shift operator (second method)
bool kthbit( int n, int k){
   if( n & (1 << (k-1)) )
        return true;
    else
        return false;
}
 int main()
{
    int n;
    int k;
    cin>>n >> k;
    cout<<kthbit(n ,k)<<endl;

    return 0;
}



