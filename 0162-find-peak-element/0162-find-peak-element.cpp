class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int ans = INT_MIN;
        int n = nums.size();
        if(n == 1 ) return 0;
        if( nums[1] < nums[0]) ans = 0; 
        for(int i = 1;i < nums.size()-1;i++){
            if(nums[i-1] < nums[i] && nums[i+1] < nums[i]){
                ans = i;
                break;
            }
        }
        if(ans == INT_MIN && nums[n-1] >nums[n-2]) ans = n-1;
        return ans;
    }
};