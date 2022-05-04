#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main() {

    int arr[8];
    for(int i=0;i<8;i++){
        cin>>arr[i];
    }
    int maxn = 0;
    int sum;
    int s=0;
    int e =3;
    while(s<=3 && e<=7){
        sum = 0;
        for(int i=s;i<=e;i++){
            sum = sum +arr[i];
        } 
        maxn = max(sum , maxn);
        s++;
        e++;
    }
    cout<<maxn<<endl;
	// Write your code here
}
