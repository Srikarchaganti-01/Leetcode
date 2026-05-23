class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int>arr = nums;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            rotate(arr.begin(), arr.begin() + 1, arr.end());
            if(arr == nums) return true;
        }
        return false;
    }
};