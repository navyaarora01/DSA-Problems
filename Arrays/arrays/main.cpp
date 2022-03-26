

#include <iostream>
#include <climits>
using namespace std;

int main()
{ int n;
// cout<<"HII"<<endl;
cin>> n;
int array[n];
for(int i=0;i<n;i++){
    cin>> array[i];
    
}
for(int i=0;i<n;i++){
    cout<< array[i]<<" ";
    
}
cout<<" "<<endl;
// int maxno=INT_MIN;
// int minno=INT_MAX;
// for(int i=0;i<n;i++){
//     if(array[i]>maxno){
//         maxno=array[i];
//     }
//      if(array[i]<minno){
//         minno=array[i];
//     }}
//     cout<<"MAximun no. is"<<maxno<<endl;
//     cout<<"Mininmun no. is"<<minno<<endl;


    return 0;
}
