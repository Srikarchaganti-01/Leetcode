class Solution {
public:
    int mirrorDistance(int n) {
        int m = n;
        if(m/10 == 0) return 0;
        int res = 0;
        while(m > 0){
            int k = m % 10;
            m = m/10;
            res = k + res * 10;
        }
        return abs(res-n);
    }
};