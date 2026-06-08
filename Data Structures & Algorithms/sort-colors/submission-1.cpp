class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> c(3,0);
        for(int i:nums){
            c[i]++;
        }
        int n = nums.size();
        int ind = 0;

        for(int i = 0; i<=2;i++){
            for(int j=0;j<c[i];j++){
                nums[ind] = i;
                ind++;
            }
        }
        
    }
};