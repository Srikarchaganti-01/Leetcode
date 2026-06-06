class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n);
        int totsum = 0;
        for(int i=0;i<n;i++){
            totsum = totsum + nums[i];
        }
        int lsum = 0;
        for(int i=0;i<n;i++){
            int rsum = totsum - lsum - nums[i];
            ans[i] = abs(lsum-rsum);
            lsum+=nums[i];
        }
        return ans;
    }
};