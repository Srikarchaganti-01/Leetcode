class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int dist = INT_MAX;
        int mini = INT_MAX;
        unordered_map<int,vector<int>>mp;
        int n = nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]].push_back(i);
        }
        for(auto &it:mp){
            auto &v = it.second;
            if(v.size() < 3) continue;
            for (int i = 0; i + 2 < v.size(); i++) {
                int dist = 2 * (v[i+2] - v[i]);
                mini = min(mini, dist);
            }
        }
        if(mini == INT_MAX) return -1;
        return mini;
    }
};