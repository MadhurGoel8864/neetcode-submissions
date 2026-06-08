class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        int n = nums.size();
        for(auto i:nums){
            mp[i]++;
        } 
        int max_freq = INT_MIN;
        for(auto i:mp){
            max_freq = max(max_freq, i.second);
        }
        // vector<int> vec(max_freq);
        vector<vector<int>> vec(max_freq+1);
        for(auto i: mp){
            vec[i.second].push_back(i.first);
        }
vector<int> ans;

for(int j = vec.size() - 1; j >= 0 && k > 0; j--) {
    for(int num : vec[j]) {
        ans.push_back(num);
        k--;
        if(k == 0) break;
    }
}
        return ans;
    }
};
