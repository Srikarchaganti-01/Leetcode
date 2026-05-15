class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>v;
        int count = 0;
        for(int i=0;i<nums.size();i++){
            int n = nums[i];
            while(n>0){
                v.push_back(n%10);
                n=n/10;
            }
            reverse(v.begin()+count,v.end());
            count = v.size();
        }
        return v;
    }
};