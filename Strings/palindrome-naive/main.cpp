#include <algorithm>
#include <iostream>
using namespace std;
bool isPal(string str){
    string rev = str;
    reverse(rev.begin() , rev.end());
    return (str == rev);
}
int main()
{
   string str;
   cin>>str;
   cout<< isPal(str);
}


//it require O(n) time 
// and O(n) auxilary space for reversed string to be created