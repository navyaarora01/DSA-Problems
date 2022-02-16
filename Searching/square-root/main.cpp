#include <iostream>
using namespace std;
int sqrRoot(int n){
    int low = 1;
    int high = n;
    int ans =-1;
   
    while(low<=high){
         int mid = (low+high)/2;
        int sqr = mid*mid;
        if(sqr == n){
            return mid;
        }
        else if(sqr>n){
            high = mid-1;
        }
        else{
            low = mid+1;
            ans = mid;
            
        }
        
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int k  = sqrRoot(n);
    cout<<k<<endl;
}
