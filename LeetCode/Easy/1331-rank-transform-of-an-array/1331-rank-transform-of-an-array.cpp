class Solution {
public:
    vector<int> removeDuplicates(vector<int>& arr) {
        vector<int> ans;
        for (int i = 0; i < arr.size(); i++) {
            if (i == 0 || arr[i] != arr[i - 1]) {
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }
    vector<int> arrayRankTransform(vector<int>& arr) {
        if(arr.size() == 0)return arr;
        if(arr.size() == 1){arr[0] = 1; return arr;}
        vector<int>numb = arr;
        sort(numb.begin(),numb.end());
        vector<int>nums = removeDuplicates(numb);
        for(int i=0;i<arr.size();i++){
            int num = arr[i];
            int low = 0;
            int high = nums.size()-1;
            int ans = -1;
            while(low<=high){
                int mid = low + (high-low)/2;
                if(nums[mid] == num){
                    ans = mid;
                    high = mid-1;
                }else if(nums[mid] < num){
                    low = mid + 1;
                }else{
                    high = mid - 1;
                }
            }
            arr[i] = ans+1;
        }
        return arr;
    }
};