class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n==0){
            return 0;
        }
        sort(nums.begin(), nums.end());
        int ans = 1;
        int ele = nums[0];
        int cnt = 1;
        for(int i = 1;i<n;i++){
            if(nums[i] == ele+1){
                cnt++;
                ele = nums[i];
                ans = max(cnt, ans);
            }
            else if(nums[i] == ele){
                continue;
            }   
            else{
                ele = nums[i];
                cnt = 1;
            }
        }
        return ans;
    }
};
