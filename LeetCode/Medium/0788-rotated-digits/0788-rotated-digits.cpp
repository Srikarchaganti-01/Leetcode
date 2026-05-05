class Solution {
public:
    int rotatedDigits(int n) {
        int count = 0;
        for(int i=1;i<=n;i++){
            int num = i;
            int newnum = 0;
            int mul = 1;
            bool flag = true;
            while(num > 0){
                int k = num%10;
                if(k==0 || k==1 || k==8) k = k;
                else if(k==2) k = 5;
                else if(k==5) k = 2;
                else if(k==6) k = 9;
                else if(k==9) k = 6;
                else {
                    flag = false;
                    break;
                }
                newnum = newnum + k*mul;
                mul = mul *10;
                num = num/10;
            }
            if(flag && (newnum != i)) count++;
        }
        return count;
    }
};