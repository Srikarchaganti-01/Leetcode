class Solution {
public:
    string largestOddNumber(string num) {
        int ans = -1;
        string str ="";
        for(int i = num.size() -1;i>=0;i--){
            if(num[i] %2 != 0) {
                ans = i;
                break;
            }
        }
        for(int i = 0;i<=ans;i++){
            str.push_back(num[i]);
        }
        return str;
    }
};