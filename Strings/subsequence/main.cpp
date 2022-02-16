#include <iostream>
using namespace std;
// time complexity is O(n+m)
// auxilary space O(1)
bool isSubseq(string str1 , string str2 , int n , int m ){
    int j=0;
    if (n<m){
        return false;
    }
    for(int i = 0; i<n && j<m ; i++){
        if(str1[i]==str2[j]){
            j++;
        }
       
    } return (j==m);
}

int main(){
    string str1 , str2;
    cin>>str1>>str2;
    cout<<isSubseq(str1 , str2 , str1.length() , str2.length());
}

