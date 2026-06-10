class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> v;
        if(nums.empty()) return v;
        int str = nums[0];
        int end = nums[0];
        int prev = nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i] == prev + 1){
                end = nums[i];
            }else{
                if(str == end){
                    v.push_back(to_string(str));
                }else{
                    v.push_back(to_string(str) + "->" + to_string(end));
                }
                str = nums[i];
                end = nums[i];
            }
            prev = nums[i];
        }
        if(str == end){
            v.push_back(to_string(str));
        }else{
            v.push_back(to_string(str) + "->" + to_string(end));
        }
        return v;
    }
};