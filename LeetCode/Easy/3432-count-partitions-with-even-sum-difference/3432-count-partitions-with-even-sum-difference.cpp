class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int total = accumulate(nums.begin(), nums.end(), 0);
        int prefix = 0, count = 0;
        for(int i = 0; i < nums.size() - 1; i++) {
            prefix += nums[i];
            int suffix = total - prefix;
            if((prefix - suffix) % 2 == 0)
                count++;
        }
        return count;
    }
};