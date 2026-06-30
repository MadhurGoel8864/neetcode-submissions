class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int m = n/3;
        vector<int> ans;
        int a,b;
        int a_freq, b_freq;
        int flag1=0, flag2=0;

        for(int i = 0;i<n;i++){
            if(flag1==0){
                flag1=1;
                a = nums[i];
                a_freq=1;
            }
            else if(nums[i] == a){
                a_freq++;
            }
            else if(flag2==0){
                flag2=1;
                b = nums[i];
                b_freq=1;
            }
            else if(nums[i] == b){
                b_freq++;
            }
            else{
                a_freq--;
                b_freq--;
                if(a_freq ==0){
                    flag1=0;
                }
                if(b_freq==0){
                    flag2=0;
                }
            }

        }
        a_freq=0;
        b_freq=0;


        cout << "\nFinal: "
             << "a = " << a
             << " a_freq = " << a_freq
             << " b = " << b
             << " b_freq = " << b_freq << endl;

        for(auto i : nums){
            if(flag1 && i == a){
                a_freq++;
            }
            else if(flag2 && i == b){
                b_freq++;
            }
        }

        if(flag1 && a_freq > m){
            ans.push_back(a);
        }
        if(flag2 && b_freq > m){
            ans.push_back(b);
        }
        return ans;
    }
};