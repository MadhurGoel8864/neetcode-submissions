class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
        for(auto i:strs){
            for(auto j:i){
                encoded = encoded + j;
            }
            encoded = encoded + '`';
        }        
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        int n = s.length();
        string tmp="";
        for(int i = 0;i<n;i++){
            if(s[i] != '`'){
                tmp = tmp + s[i];
            }
            else{
                decoded.push_back(tmp);
                tmp = "";
            }
        }
        return decoded;
    }
};
