class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt = 0;
        int n = nums.size();
        int sum=0;
        map<int,int> prefixSums ;
        prefixSums[0]=1;
        int diff;
        for(int i=0;i<n;i++){

            sum+=nums[i];
            diff = sum-k;
            cnt+=prefixSums[diff];
            prefixSums[sum]++; 
        }
        
        // vector<int> prefix;
        // int tmp=0;
        // for(auto i:nums){
        //     prefix.push_back(tmp);
        //     tmp+=i;
        // }
        // for(auto i:prefix){
        //     cout<<i<<" ";
        // }       

        // for(int i = 0;i<n;i++){
        //     int sum=0;
        //     for(int j=i;j<n;j++){
        //         sum+=nums[j];
        //         if(sum==k){
        //             cnt++;
        //             cout<<"Sum: "<<sum<<" cnt: "<<cnt<<" i: "<<i<<" j: "<<j<<endl;
        //         }
        //     }
        // }
        return cnt;
    }
};