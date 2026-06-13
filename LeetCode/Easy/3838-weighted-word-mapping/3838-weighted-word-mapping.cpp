class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        unordered_map<int,char>mp;
        for(int i=0;i<26;i++){
            int num = 122-i;
            char ch = (char)num;
            mp[i] = ch;
        }
        string str = "";
        for(int i=0;i<words.size();i++){
            string s = words[i];
            int sum = 0;
            for(int j=0;j<s.size();j++){
                int ch = s[j];
                ch = ch-97;
                sum+=weights[ch];
            }
            sum = sum%26;
            str+=mp[sum];
        }
        return str;
    }
};