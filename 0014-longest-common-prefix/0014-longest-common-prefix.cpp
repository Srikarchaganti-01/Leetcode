class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        string base = strs[0];
        if(base == "") return "";
        for(int i = 0; i < base.size(); i++){
            for(int j = 1;j<strs.size();j++){
                if(i > strs[j].size() || base[i] != strs[j][i]) return ans;
            }
            ans.push_back(base[i]);
        }
        return ans;
    }
};