class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        int a = nums[0];
        int b = nums[n-1];
        if(a<b) return a;
        else if((b<a) && (n==2)) return b;
        for(int i=1;i<n-1;i++){
            if((nums[i-1] > nums[i]) && (nums[i+1] > nums[i]) ) return nums[i];
        }
        return b;
    }
};