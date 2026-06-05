class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int major = nums[0];
        int freq = 1;
        for(int i = 1;i<n;i++){
            if(freq==0){
                freq=1;
                major = nums[i];
            }
            else if(nums[i] == major){
                freq++;
            }
            else{
                if(freq>=1){
                    freq--;
                    continue;
                }
            }

        }
        return major;
    }
};