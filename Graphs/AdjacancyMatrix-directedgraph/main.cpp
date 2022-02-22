#include <iostream>
using namespace std;
int main(){
    int arr[100][100]={0};
    int v;
    cout<<"Enter number of vertices : ";
    cin>>v;
    for(int i=1;i<=v;i++){
        for(int j=1 ;j<=v;j++){
            if(i!=j){                 //As there is no self directing loop in the directed graph
                cout<<"Is there any node between "<<i<<" to "<<j<<"? (1-yes/0-no): ";
            cin>>arr[i][j];
            }
            
        }
    }
    for(int i=1;i<=v;i++){
        for(int j=1 ;j<=v;j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
