class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> ans;
        int n = nums.size();
        int m = n/3;
        for(auto i:nums){
            mp[i]++;
        }
        for(auto i:mp){
            if(i.second>m){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};