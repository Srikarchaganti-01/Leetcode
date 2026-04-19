class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int maxi =0;
        for(int i=0;i<nums1.size();i++){
            int num = nums1[i];
            int low = i;
            int high =nums2.size();
            while(low<=high){
                int mid = (low+high)/2;
                if(mid >= nums2.size()) break;
                if(i <= mid && num <= nums2[mid]) {
                    low  = mid+1;
                    maxi = max(maxi, mid-i );
                }
                else if(nums2[mid] < num) high = mid-1;
            }
        }
        return maxi;
    }
};