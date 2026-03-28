class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        for(int i =0;i<n;i++){
            int low = i+1;
            int high = n-1;
            while(low<=high){
                int mid = low + (high-low)/2;
                int sum = numbers[i] + numbers[mid];
                if(sum == target){
                    return {i+1,mid+1};
                }
                else if(sum > target) high = mid-1;
                else if(sum < target) low = mid+1;
            }
        }
        return {};
    }
};