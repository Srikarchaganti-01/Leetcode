class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>v;
        for(int i=left;i<=right;i++){
            int j = i;
            bool flag = true;
            while(j && flag){
                if(j % 10 == 0) flag = false;
                int n = j % 10;
                if(flag && i%n != 0){
                    flag = false;
                    break;
                }
                j= j / 10;
            }
            if(flag) v.push_back(i);
        }
        return v;
    }
};