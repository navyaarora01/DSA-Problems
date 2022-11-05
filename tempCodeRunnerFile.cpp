#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    for(int k = 0;k<T;k++){
        int n , m ;
        cin>>n>>m;
        vector<int> v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }
        
        int sum1=0;
        int sum2=0;
        for(int i =0;i<m;i++){
            sum1+=v[i];
        }
        for(int i =m;i<n;i++){
            sum2+=v[i];
        }
        int s1 = abs(sum2-sum1);

        int sumA=0;
        int sumB=0;
        for(int i =0;i<n-m;i++){
            sumA+=v[i];
        }
        for(int i =n-m+1;i<n;i++){
            sumB+=v[i];
        }
        int s2 = abs(sumB-sumA);


   if(s1>s2){
    cout<<"s1 "<<s1<<endl;
   }
   else{
     cout<<"s2 "<<s2<<endl;
   }
       
   
        
  


    }
}