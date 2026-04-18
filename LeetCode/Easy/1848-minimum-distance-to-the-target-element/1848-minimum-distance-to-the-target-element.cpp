class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int n = INT_MAX;
        int m = INT_MAX;
        for(int i=start;i<nums.size();i++){
            if(nums[i] == target) {
                n = abs(start-i);
                break;
            }
        }
        for(int i=start;i>=0;i--){
            if(nums[i] == target) {
                m = abs(start-i);
                break;
            }
        }
        return min(n,m);
    }
};