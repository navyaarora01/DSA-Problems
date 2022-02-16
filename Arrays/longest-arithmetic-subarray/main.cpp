/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
// #include <climits>
#include <bits/stdc++.h>
using namespace std;
int main()
{int n;
cin >> n;
int arr[n];
for(int i=0;i<n;i++){
    cin>> arr[i];
}
int ans = 2; //maximum subararray length
int d = arr[1]-arr[0];
int curr = 2; // current subarray length
for(int i = 2;i<n;i++){
    //there are two cases..either common diff will be equal or not 
    if(d == arr[i]- arr[i-1]){
        curr++;
    }
    else{
        curr=2;
        d = arr[i]-arr[i-1];
    }
    ans = max(curr,ans);
    
}cout<<"Maximum length of subarray is";
cout<< ans<<endl;
    return 0;
}


