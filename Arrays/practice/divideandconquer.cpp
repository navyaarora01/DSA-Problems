#include <iostream>
using namespace std;
int count=0;
pair<int,int> MinMax(int arr[],int s ,int e){
    pair<int,int> m;
    pair<int,int> m1;
    pair<int,int> m2;
    // int count = 0;
    if( s  == e ){
        m.first = arr[s];
        m.second = arr[s];
    }
    else if(e-s == 1){
        if(arr[s]>arr[e]){
            m.first = arr[e];
            m.second = arr[s];
            count ++;
        }
        else{
            m.first = arr[s];
            m.second = arr[e];
            count++;

        }
    }
    else{
        int mid = (s+e)/2 ;
        m1 = MinMax(arr , s , mid);
        m2 = MinMax(arr , mid+1 , e);
        if(m1.first<m2.first){
            m.first = m1.first;
            count++;
        }
        else{
            m.first = m2.first;
            count++;
        }
        if(m1.second<m2.second){
            m.second = m2.second;
            count++;
        }
        else{
            m.second = m1.second;
            count++;
        }
    }
    // cout<<"count = "<<count<<endl;
    return m;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    pair<int,int> m;
    m = MinMax(arr , 0 , n-1);
    cout<<m.first<<endl;
    cout<<m.second<<endl;
    cout<<"count = "<<count<<endl;

}