class Solution {
public:
    int arrangeCoins(int n) {
        int res = 0;
        if(n == 1) return 1;
        if(n == 0) return 0;
        int i = 1;
        while(n-i >= 0){
            n = n-i;
            res++;
            i++;
        }
        return res;
    }
};