class Solution {
public:
    vector<int>mergereturn(vector<int>& nums1){
        sort(nums1.begin(),nums1.end());
        return nums1;
    }
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i = m;i < m+n; i++){
            nums1[i] = nums2[i-m];
        }
        mergereturn(nums1);
    }
};