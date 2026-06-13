class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
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
            char ch = 'z' - sum;
            str+=ch;
        }
        return str;
    }
};