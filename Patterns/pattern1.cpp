// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int  p = 1;
//         for(int j =n-i;j>0;j--){
//             cout<<p<<" ";
//             p++;
//         }
//         cout<<endl;
//     }
// }

#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int N;
    cin>>N;
    int i=N;
    int p=1;
    while(i>=1){
      int j=1;
      while(j<=i){
        cout<<j<<" ";
        j++;
      }
      cout<<endl;
      i--;
    }
    return 0;
  }