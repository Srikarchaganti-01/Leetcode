class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count =0;
        for(int i=0;i<nums.size();i++){
            int num = nums[i];
            if(num % 3 == 0)continue;
            int m = 0;
            int n = 0;
            int numb = num;
            while(num %3 !=0){
                num--;
                n++;
            }
            while(numb % 3 != 0){
                numb++;
                m++;
            }
            count = count + min(n,m);
        }
        return count;
    }
};