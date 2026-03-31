class Solution {
public:
    int beautySum(string s) {
        int count = 0;
        for(int i = 0; i < s.size(); i++){
            unordered_map<char,int> mp;  
            for(int j = i; j < s.size(); j++){
                mp[s[j]]++;  
                int maxf = INT_MIN;
                int minf = INT_MAX;
                for(auto it : mp){
                    maxf = max(maxf, it.second);
                    minf = min(minf, it.second);
                }
                int beauty = maxf - minf;
                if(beauty > 0) count += beauty;
            }
        }
        return count;
    }
};