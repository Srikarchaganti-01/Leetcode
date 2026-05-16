class Solution {
public:
    int findMin(vector<int>& nums) {
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            if(!count(v.begin(),v.end(),nums[i])){
                v.push_back(nums[i]);
            }
        }
        int n = v.size();
        if(n == 1) return v[0];
        int a = v[0];
        int b = v[n-1];
        if(a<b) return a;
        else if((b<a) && (n==2)) return b;
        for(int i=1;i<n-1;i++){
            if((v[i-1] > v[i]) && (v[i+1] > v[i]) ) return v[i];
        }
        return b;
    }
};