#include<bits/stdc++.h>
using namespace std;
long long colosseum(int N,vector<int> A) {
        int size = A.size();
        vector<int > a; 
        for(int i=0 ;i<3*N/2;i++){
            a.push_back(A[i]);
            
        }
      
    }
        vector<int> b;
        for(int i=3*N/2 ;i<size;i++){
            b.push_back(A[i]);
           
        }
       
    }
     cout<<endl;
        int bsize = b.size();
        int S1=0;
        int S2=0;
         cout<<endl;
        for(int i:a){
            S1 += i;
           
            
        }
       
        for(int i:b){
            S2 += i;
        }
         
        if(S1>S2){
            S1 = S1-a[0];
            S2=S2-b[0];
        }else if(S2>S1){
            S1 = S1-a[0];
            S2= S2-b[bsize-1];
        }
        return(S1-S2);
   }
int main(){
    int n = 2;
    
    vector<int> A{1,1,5,3,7,7};
    for(int x: A){
        cout<<x<<" ";
    }
     int ans = colosseum(n , A);
     cout<< ans;
}