#include <iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    for(int k=1;k<=T;k++){
        int N;
        cin>>N;
        int arr[N];
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        //sorting an array
        int it = 1;
        while(it<N){
            for(int i=0;i<N-it;i++){
                if(arr[i]>arr[i+1]){
                    int temp = arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1] = temp;
                }
            }
        it++;
        }
        //*************
        int value = 1;
        int result=0;
        for(int i=0;i<N;i++){
            if(i==0){
                result  = result + value;
            }
            else{
                if(arr[i]==arr[i-1]){
                    result  = result + value;
                }
                else{
                    value++;
                    result  = result + value;
                }
            }
        }
        
        cout<<"Case #"<<k<<": "<<result<<endl;
        
    }
}