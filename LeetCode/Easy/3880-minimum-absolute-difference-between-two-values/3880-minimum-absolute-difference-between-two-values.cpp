class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int p = nums.size();
        vector<int>v;
        for (int i = 0;i<p;i++){
            for(int j=i;j<p;j++){
                if((nums[i]==1 && nums[j]==2) || (nums[i] == 2 && nums[j] == 1)){
                    int diff = abs(i-j);
                    v.push_back(diff);
                }else continue;
            } 
        }
        if(v.empty()) return -1;
        sort(v.begin(),v.end());
        return v.front();
    }
};