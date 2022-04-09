
#include <iostream>
using namespace std;
int main()
{ 
int n;
cin>> n;
int arr[n];
int count=0;
for(int i=0;i<n;i++){
    cin>> arr[i];
}
int maximum = arr[0];
int minimum  = arr[0];
for(int i=1;i<n;i++){
    if(arr[i]<minimum){
        minimum = arr[i];
        count++;
    }
    else{
        count++;
    }
    if(arr[i]>maximum){
        maximum = arr[i];
        count++;
    }
    else{
        count++;
    }
    


}

cout<<"count = "<<count<<endl;
cout<< minimum<<endl;
cout<< maximum<<endl;
    return 0;
}
