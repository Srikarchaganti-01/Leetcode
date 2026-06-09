class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int mini = nums[0];
        int maxi = nums[nums.size()-1];
        long long ans = 1LL*k*(maxi-mini);
        return ans;
    }
};