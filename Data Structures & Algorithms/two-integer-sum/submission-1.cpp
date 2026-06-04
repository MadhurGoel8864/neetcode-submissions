class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // sort(nums.begin(), nums.end());
        // int i = 0;
        int n = nums.size();
        // unordered_set<int> st;
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i = 0;i <n;i++){
            int req = target - nums[i];
            if(mp.find(req) != mp.end()){
                ans.push_back(mp[req]);
                ans.push_back(i);
                return ans;
            }
            if(mp.find(nums[i]) == mp.end()){
                mp[nums[i]] = i;
            }
        }
        return ans;



        // int j = n-1;
        // int sum;
        // while(i<j){
        //     sum = nums[i] + nums[j];
        //     if(sum==target) 
        // }
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         sum =nums[i] + nums[j];
        //         if(sum==target){
        //             ans.push_back(i);
        //             ans.push_back(j);
        //             return ans;
        //         }
        //     }
        // }
        // return ans;
    }
};
