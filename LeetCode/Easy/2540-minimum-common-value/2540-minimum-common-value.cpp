class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0;i<nums1.size();i++){
            int low = 0;
            int high = nums2.size()-1;
            while(low<=high){
                int mid = (low+high)/2;
                if(nums1[i] == nums2[mid]) return nums2[mid];
                else if(nums1[i] > nums2[mid])low = mid+1;
                else if(nums1[i] < nums2[mid])high = mid-1;
            }
        }
        return -1;
    }
};