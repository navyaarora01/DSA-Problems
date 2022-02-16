#include <iostream>
#include <stack>
using namespace std;
bool matching(char a , char b){
    if((a=='('&& b==')')||(a=='{'&& b=='}')||(a=='['&& b==']')){
        return true;
    }
    else{
        return false;
    };
}
bool isBalanaced(string str){
    stack<int> s;
    for(int i=0;i<str.length();i++){
        if(str[i]=='('||str[i]=='{'||str[i]=='[' ){
            s.push(str[i]);
        }
        else{
            if(s.empty()==true){
                return false;
            }
            else if((matching(s.top(),str[i]))==false){
                return false;
            }
            else{
                s.pop();
            }
        }
    }
    return (s.empty()==true);
}
int main(){
    string str;
    cin>>str;
    bool ans = isBalanaced(str);
    cout<<ans;
}

//we need to return false for ][ these type of cases