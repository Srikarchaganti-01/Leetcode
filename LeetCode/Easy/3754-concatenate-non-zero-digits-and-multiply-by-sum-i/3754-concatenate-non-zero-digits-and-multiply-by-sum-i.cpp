class Solution {
public:
    long long sumAndMultiply(int n) {
        int num = n;
        long long sum = 0;
        string s = "";
        if(num == 0)return 0;
        while(num > 0){
            int k = num%10;
            sum+=k;
            if(k>0){
            string str = to_string(k);
            s+=str;
            }
            num=num/10;
        }
        
        reverse(s.begin(),s.end());
        
        long long x = stoi(s);
        long long ans = x*sum;
        return ans;

    }
};