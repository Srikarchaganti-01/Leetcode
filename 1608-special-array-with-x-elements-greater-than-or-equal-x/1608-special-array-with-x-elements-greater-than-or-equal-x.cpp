class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n = nums.size();
        int low = 1;
        int high = n;
        while(low<=high){
            int mid = (low+high)/2;
            int count = 0;
            for(int j =0;j<n;j++){
                if(nums[j] >= mid) count++;
            }
            if(count == mid) return mid;
            else if(count > mid) low = mid+1;
            else if(count < mid) high = mid-1;
            count = 0;
        }
        return -1;
    }
};