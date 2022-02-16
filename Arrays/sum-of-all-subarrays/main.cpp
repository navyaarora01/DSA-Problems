
#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    int curr =0;  //it stores current sum of a subarrays
for(int i=0;i<n;i++){
    curr = 0;
    for(int j=i;j<n;j++){
        curr +=arr[j];
        cout <<"sum of subarray is "<<curr<<endl;
    }
}
    return 0;
}

