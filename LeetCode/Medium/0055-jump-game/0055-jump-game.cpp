class Solution {
public:
    bool canJump(vector<int>& nums) {
        int dist = 1;
        if(nums.size() <=2){
            if(nums.size() == 1) return true;
            if(nums.size() == 2){
                if(nums[0] >= 1) return true;
                else return false;
            }
        }
        int maxboost = INT_MIN;
        int boost =0;
        for(int i=0;i<nums.size()-1;i++){
           boost = max(boost,nums[i]);
           if(boost == 0) return false;
           boost--;
        }
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i] >= dist) return true;
            dist++;
        }
        
        return false;
    }
};