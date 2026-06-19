class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int prev = 0;
        int ans = 0;
        for(int i=0;i<gain.size();i++){
            prev+=gain[i];
            ans=max(ans,prev);
        }
        return ans;
    }
};