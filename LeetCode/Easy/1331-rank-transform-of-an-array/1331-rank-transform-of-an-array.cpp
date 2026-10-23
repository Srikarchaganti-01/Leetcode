class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if(arr.size() == 0)return arr;
        if(arr.size() == 1){arr[0] = 1; return arr;}
        unordered_map<int,int>mp;
        vector<int>nums = arr;
        sort(nums.begin(),nums.end());
        int j= 2;
        mp[nums[0]] = 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i] != nums[i-1]){mp[nums[i]] = j;j++;}
        }
        for(int i=0;i<arr.size();i++){
            arr[i] = mp[arr[i]];
        }
        return arr;
    }
};