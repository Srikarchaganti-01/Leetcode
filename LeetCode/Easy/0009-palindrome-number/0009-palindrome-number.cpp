class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        vector<int>og;
        vector<int>dup;
        int n = x;
        while(n > 0){
            int k = n%10;
            og.push_back(k);
            dup.push_back(k);
            n = n / 10;
        }
        reverse(dup.begin(),dup.end());
        return dup==og;
    }
};