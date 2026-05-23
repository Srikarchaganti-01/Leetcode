class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int>arr = nums;
        vector<int>id = nums;
        sort(id.begin(),id.end());
        for(int i=0;i<=nums.size();i++){
            rotate(arr.begin(), arr.begin() + 1, arr.end());
            if((arr == id)) return true;
        }
        return false;
    }
};