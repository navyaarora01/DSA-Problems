
#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{ int maximum = INT_MIN;
int n;
cin>> n;
int arr[n];
for(int i=0;i<n;i++){
    cin>> arr[i];
}
for(int i=0;i<n;i++){
    // maximum = max(maximum,arr[i]);
    if(arr[i]>maximum){
        maximum = arr[i];
    }
    cout<< maximum<<endl;
}
    return 0;
}

// Time complexity of this solution is O(n).....cause it is triversing the whole array only once
