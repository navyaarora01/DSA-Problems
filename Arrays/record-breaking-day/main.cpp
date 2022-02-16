/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{int n;
cin>> n;
int arr[n+1];
 arr[n]=-1;
 for(int i = 0;i<n;i++){
     cin>>arr[i];
 }
 int ans =0;
 int mx = INT_MIN;
 if(n==1){
     cout<<"1"<<endl;
     return 0 ; 
 }
 for(int i=0;i<n;i++){
     if (arr[i]>mx&& arr[i]>arr[i+1]){
         ans ++;

     }         mx = max(arr[i],mx);

 }     cout<<mx;
 
    return 0;
}

