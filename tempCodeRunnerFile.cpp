#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    
    for(int i=2;i<n;i++){
        bool flag = true;
       for(int j=1;j<i;j++){
        if(i%j==0){
            flag = false;
        }if(flag == true){
         cout<<i<<" ";
     }

     }
     
    }
}