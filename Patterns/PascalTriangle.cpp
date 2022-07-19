#include <bits/stdc++.h>
using namespace std;
void pascalTriangle(int numRows ){
     vector<vector<int>> ans;
        for(int i = 0 ;i < numRows;i++){
            vector<int> v(i+1 , 1);
             for(int j=1;j<i;j++){
                 v[j] = ans[i-1][j]+ans[i-1][j-1];
             }
            ans.push_back(v);
        }
        for(int  i =0;i<numRows;i++){
             for(int space = 1; space <= numRows-i; space++)
            cout <<" ";
            for(int j = 0;j<i+1;j++){
                cout<<ans[i][j]<<" ";       
                     }
                cout<<endl;
        }


}
 int main(){
    int n ; 
    cin>> n;
    pascalTriangle(n);

 }