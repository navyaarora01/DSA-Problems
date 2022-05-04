class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int ,int> umap;
        for(auto x : nums){
            umap[x]++;
        }
        int max = 0;
        int ans;
        for(auto x : umap){
            if(x.second>max){
                max = x.second;
                ans  = x.first;
            }
        }
        // int ans;
        // for(auto x : umap){
        //     if(x.second==max){
        //         ans =  x.first;
        //     }
        // }
        return ans;
    }
    
};


// or or 
// sort(nums.begin() , nums.end());
//         return nums[nums.size()/2];