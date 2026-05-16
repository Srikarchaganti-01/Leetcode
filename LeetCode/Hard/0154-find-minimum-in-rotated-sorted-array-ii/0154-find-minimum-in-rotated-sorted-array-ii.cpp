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
        int low = 0;
        int high = v.size()-1;
        while(low<high){
            int mid = (low+high)/2;
            if(v[mid] > v[high]) low = mid+1;
            else high = mid;

        }
        return v[low];
    }
};