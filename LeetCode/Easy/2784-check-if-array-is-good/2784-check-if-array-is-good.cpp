class Solution {
public:
    bool isGood(vector<int>& nums) {
        vector<int>res;
        sort(nums.begin(),nums.end());
        int maxi = nums.back();
        for(int i=1;i<=maxi;i++){
            res.push_back(i);
        }
        res.push_back(maxi);
        
        return(nums == res);
    }
};