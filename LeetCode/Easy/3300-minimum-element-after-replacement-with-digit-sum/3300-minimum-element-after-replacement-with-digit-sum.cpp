class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int>v;
        int mini = INT_MAX;
        for(int i=0;i<nums.size();i++){
            int num = nums[i];
            int sum = 0;
            while(num > 0){
                int k = num%10;
                sum = sum+k;
                num = num/10;
            }
            mini = min(mini,sum);
        }
        return mini;
    }
};