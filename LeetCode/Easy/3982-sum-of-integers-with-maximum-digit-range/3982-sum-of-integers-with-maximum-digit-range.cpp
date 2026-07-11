class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        unordered_map<int,int>mp;
        int max_range = INT_MIN;
        for(int i=0;i<nums.size();i++){
            vector<int>v;
            int num = nums[i];
            while(num>0){
                int k = num%10;
                v.push_back(k);
                num=num/10;
            }
            int mini = *min_element(v.begin(), v.end());
            int maxi = *max_element(v.begin(), v.end());
            int range = maxi-mini;
            mp[nums[i]] = range;
            max_range = max(range,max_range);
        }
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]] == max_range)ans+=nums[i];
        }
        return ans;
    }
};