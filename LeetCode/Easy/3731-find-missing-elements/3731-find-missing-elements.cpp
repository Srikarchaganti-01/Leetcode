class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<int> v;
        int j = nums[0];

        for (int i = 0; i < nums.size(); i++) {
            while (j < nums[i]) {
                v.push_back(j);
                j++;
            }
            j = nums[i] + 1;
        }

        return v;
    }
};