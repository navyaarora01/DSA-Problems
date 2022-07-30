#include <iostream>
using namespace std;

int main(){
    int n;
    
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
cout<<"enter the sum value"<<endl;
int x;
cin>>x;
bool flag = false ;
     for(int i = 0;i<n;i++){
            for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j] == x){
                // cout<<true<<endl;
                flag = true;
            }
        }
     }
     if(flag == true){
        cout<<true<<endl;
     }
     else{
        cout<<false;
     }

}