#include <iostream>
using namespace std;
 int main(){
    int n;
    cin>> n;
    int rev = 0;
     int temp  = n;
     while(n){
        int r = n%10;
        rev = rev*10 +r;
        n = n/10;
     }
     if(rev == temp){
        return true;
     }else{
        return false;
     }
 }