class Solution {
public:
    bool split(vector<int> &nums,int k, int mid){
        int users =1;
        int pre = 0;
        for(int i =0;i<nums.size();i++){
            if(pre + nums[i] > mid) {
                users++;
                pre = nums[i];
            }
            else pre+= nums[i];
        }
        if(users > k) return false;
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);
        int res = -1;
        for(int i =low;i<=high;i++){
            int mid = i;
            if(split(nums,k,mid)){
                res = mid;
                high = mid -1;
            }
            else{
                low = mid + 1 ;
            }
        }
        return res;
    }
};  