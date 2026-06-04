class Solution {
public:
    bool is_anagram(string a, string b){
        unordered_map<char,int> mp;
        int n = a.length();
        int m = b.length();
        if(n!=m)
            return false;
        for(int i =0;i<n;i++){
            mp[a[i]]++;
            mp[b[i]]--;
        }
        for(auto i:mp){
            if (i.second !=0)
                return false;
        }
        return true;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<vector<string>> ans;
        for(int i = 0; i<n;i++){
            string s = strs[i];
            bool pushed = 0;
            for(int x = 0; x< ans.size(); x++){
                if(ans[x].size()> 0 and is_anagram(ans[x][0], s)){
                    ans[x].push_back(s);
                    pushed = 1;
                    break;
                }
            }
            if(!pushed){
                ans.push_back({s});
            }
        }
        return ans;
    }
};
