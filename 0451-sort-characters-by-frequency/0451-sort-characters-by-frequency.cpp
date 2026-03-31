class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(char c : s) mp[c]++;
        string ans = "";
        while(!mp.empty()){
            char maxChar;
            int maxFreq = 0;
            for(auto it : mp){
                if(it.second > maxFreq){
                    maxFreq = it.second;
                    maxChar = it.first;
                }
            }
            ans.append(maxFreq, maxChar);
            mp.erase(maxChar);
        }
        return ans;
    }
};