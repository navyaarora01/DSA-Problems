#include <bits/stdc++.h>
using namespace std;
 void reverse(vector<int> &num, int low, int high){
        while(low < high){
            swap(num[low], num[high]);
            low++;
            high--;
        }
    }
// void rotateLeft(vector<int>& nums , int k){
//     int n = nums.size();
//     k=k%n;
//     reverse(nums , 0 , k-1);
//     reverse(nums , k , n-1);
//     reverse(nums , 0 , n-1);
//     cout<<"left rotated array is: "<<endl;
//     for(auto x : nums){
//         cout<<x <<" ";
//     }
// }
void rotateRight(vector<int>& nums , int k){
    int n = nums.size();
    k=k%n;
    reverse(nums , 0 , n-k-1);
    reverse(nums , n-k , n-1);
    reverse(nums , 0 , n-1);
    cout<<endl;
    cout<<"Right rotated array is: "<<endl;
    for(auto x : nums){
        cout<<x <<" ";
    }
}
int main(){
    vector<int> nums;
    int n;
    cin>>n;
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        nums.push_back(a);
    }
    int k;
    cin>>k;
    // rotateLeft(nums , k);
    rotateRight(nums , k);
    
}