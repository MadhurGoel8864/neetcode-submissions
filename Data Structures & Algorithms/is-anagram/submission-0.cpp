class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> tmp(26,0);
        int n = s.length();
        int m= t.length();
        if(n!=m){
            return false;
        }
        for(int i=0;i<n;i++){
            tmp[s[i] - 'a']++;
            tmp[t[i] - 'a']--;
        }
        for(int a:tmp){
            if(a!=0){
                return false;
            }
        }
        return true;

    }
};
