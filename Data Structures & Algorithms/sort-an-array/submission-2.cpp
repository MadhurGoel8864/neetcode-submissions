class Solution {
public:

    int partition(vector<int>& nums, int start, int end){
        int idx = start - 1;
        int pivot = nums[end];

        for(int j = start; j<= end -1;j++){
            if(nums[j] > pivot){
                continue;
            }
            else{
                idx++;
                swap(nums[idx], nums[j]);
            }
        }

        swap(nums[idx+1], nums[end]);
        return idx+1;

    }

    void quicksort(vector<int>& nums, int start, int end){
        if(start < end){
            int piv_index = partition(nums, start, end);
            quicksort(nums, start, piv_index-1);
            quicksort(nums, piv_index+1, end);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        quicksort(nums, 0 , nums.size()-1);
        return nums;
    }
};