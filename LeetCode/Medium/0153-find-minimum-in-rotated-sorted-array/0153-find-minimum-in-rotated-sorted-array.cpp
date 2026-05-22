class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        int a = nums[0];
        int b = nums[n-1];
        if(a<b) return a;
        else if((b<a) && (n==2)) return b;
        int low = 0;
        int high = nums.size()-1;
        while(low<high){
            int mid = (low+high)/2;
            if(nums[mid] > nums[high]) low = mid+1;
            else high = mid;

        }
        return nums[low];
    }
};