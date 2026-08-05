class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++) {
            mp[nums[i]]=i;
        }
        for(int i=0;i<n;i++){
            if(mp.count(target-nums[i]) && mp[target-nums[i]]!=i) 
            return {min(i,mp[target-nums[i]]), max(i,mp[target-nums[i]])};
        }
        
    }
};
