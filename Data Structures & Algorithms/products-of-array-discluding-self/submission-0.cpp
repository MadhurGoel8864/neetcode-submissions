class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        int b = 1;
        int z_count = 0;
        int n = nums.size();
        for(auto i:nums){
            product*=i;
            if(i!=0){
                b*=i;
            }
            if(i==0){
                z_count++;
            }
        }
        if(z_count>1){
            vector<int> abc(n,0);
            nums = abc;
            return nums;
        }
        for(int i =0;i<n;i++){
            if(nums[i]!=0){
                nums[i] = product / nums[i];
            }
            else{
                nums[i] = b;
            }
        }
        return nums;
    }
};
