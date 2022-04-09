#include<iostream>
 using namespace std;
 int merge(int arr[],int s,int m, int e)
 {
     int b[e-s+1];
     int i=s,j=m+1,k=0;
     while(i<=m && j<=e)
     {
         if(arr[i]<arr[j])
         {
             b[k]=arr[i];
             i++;
             k++;
         }
         else
         {
             b[k]=arr[j];
             j++;
             k++;
         }
     }
         while(i<=m)
         {
             b[k]=arr[i];
             i++;
             k++;
         }
         while(j<=e)
         {
             b[k]=arr[j];
             j++;
             k++;
         }
         for(int l=s;l<=e;l++)
         {
             arr[l]=b[l-s];
         }
     }
 int mergesort(int arr[],int s,int e)
 {
     if(e>s)
     {
         int m=(s+e)/2;
         mergesort(arr,s,m);
         mergesort(arr,m+1,e);
         merge(arr,s,m,e);
     }
 }

 int main()
 {
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     int s,e;
     s=0;
     e=n-1;
     mergesort(arr,s,e);
     for(int i=0;i<n;i++)
     {
         cout<<" "<<arr[i];
     }
 }