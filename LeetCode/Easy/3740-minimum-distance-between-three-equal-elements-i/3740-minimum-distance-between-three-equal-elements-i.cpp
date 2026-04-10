class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int dist = INT_MAX;
        int mini = INT_MAX;
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                for(int k=j;k<n;k++){
                    if((nums[i] == nums[j] && nums[i] == nums[k]) && (i != j && j != k)){
                        dist = abs(i-j) + abs(j-k) + abs(k-i);
                        mini = min(dist,mini);
                    }
                }
            }
        }
        if(mini == INT_MAX) return -1;
        return mini;
    }
};