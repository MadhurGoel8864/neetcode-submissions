class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // sort(nums.begin(), nums.end());
        // int i = 0;
        int n = nums.size();
        // int j = n-1;
        int sum;
        vector<int> ans;
        // while(i<j){
        //     sum = nums[i] + nums[j];
        //     if(sum==target) 
        // }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                sum =nums[i] + nums[j];
                if(sum==target){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        return ans;
    }
};
