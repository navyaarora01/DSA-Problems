
#include <iostream>
using namespace std;

int getbit(int n, int pos){
    // return ((n>>pos )&1);
    // or
    return ((n&(1<<pos))!=0);
}
int setbit(int n , int pos){
    
    return (n | (1<<pos));
}
int main()
{
    cout<< getbit(5,1)<<endl;
    // cout << setbit(8,1);
    return 0;
}


