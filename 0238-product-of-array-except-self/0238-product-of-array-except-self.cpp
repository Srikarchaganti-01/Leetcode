class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>pre(n);
        vector<int>suf(n);
        vector<int>v(n);
        pre[0] = nums[0];
        suf[n-1] = nums[n-1];
        for(int i=1;i<n;i++){
            pre[i] = pre[i-1] * nums[i];
        }
        for(int i=n-2;i>=0;i--){
            suf[i] = suf[i+1] * nums[i];
        }
        v[0] = suf[1];
        v[n-1] = pre[n-2];
        for(int i=1;i<n-1;i++){
            v[i] = pre[i-1] * suf[i+1];
        }
        return v;
    }
};