class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minheap;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto &r : mp) {
            minheap.push({r.second,r.first});
            if(minheap.size()>k) minheap.pop();
        }
        vector<int> ans;
        while(!minheap.empty()) {
            auto p=minheap.top();
            minheap.pop();
            ans.push_back(p.second);
        }
        return ans;
    }
};
