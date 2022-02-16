#include <iostream>
#include <string>
using namespace std;
//***********NAive approach********
// Time complexity is O(n^2)
// int leftRepeatingChar(string &str){
//     for(int i=0;i<str.length();i++){
//         for(int j=i+1;j<str.length();j++){
//             if(str[i]==str[j]){
//                 return i;
//             }
//         }
//     }
//     return -1;
// }
// **************Better Approach*************
const int CHAR = 256;
int leftRepeatingChar(string str){
    int count[CHAR]={0};
    for(int i=0;i<str.length();i++){
        count[str[i]]++;
    }
     for(int i=0;i<str.length();i++){
        if(count[str[i]]>1){
            return i;
        }
    }
    return -1;
}


int main(){
    string str;
    cin>>str;
    int ans = leftRepeatingChar(str);
    cout<<ans<<endl;

}