class Solution {
public:
    void merge(vector<int> &arr, int l, int m, int r){
        int i = l;
        int j = m+1;
        vector<int> tmp;
        while(i<=m and j<=r){
            if(arr[i] <= arr[j] ){
                tmp.push_back(arr[i]);
                i++;
            }
            else{
                tmp.push_back(arr[j]);
                j++;
            }
        }
        while(i<=m){
                tmp.push_back(arr[i]);
                i++;
        }
        while(j<=r){
                tmp.push_back(arr[j]);
                j++;
        }
        for(int i = l;i<=r;i++){
            arr[i] = tmp[i-l];
        }
        // arr = tmp;
    }
    void mergeSort(vector<int>& arr, int l, int r) {
        if (l >= r) return;
        int m = (l + r) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};