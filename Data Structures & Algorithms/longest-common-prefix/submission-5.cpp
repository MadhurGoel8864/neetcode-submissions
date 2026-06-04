class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int n = strs.size();
        int a = 0;
        int i=0;
        int x = strs[0].length();
        while(true){
            char prev = ' ';
        for(i = 0; i<n;i++){
            if(a>=strs[i].length()){
                return ans;
            }
                if(prev==' '){
                    prev=strs[i][a];
                }
                else if(a< strs[i].length() and  prev!=strs[i][a]){
                    return ans;
                }
            }
            ans = ans + strs[0][a];
            a++;
            // if(a==x){
            //     return ans;
            // }
        }
        return ans;
    }
};