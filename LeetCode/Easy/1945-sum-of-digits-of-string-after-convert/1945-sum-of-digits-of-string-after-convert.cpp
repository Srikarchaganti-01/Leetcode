class Solution {
public:
    string returndig(string s){
        string sum = "";
        for(int i = 0; i < s.size(); i++){
            int k = s[i] - 96;
            sum += to_string(k);
        }   
        return sum;
    }
    int transform(string num){
        int sum = 0;
        for(int i = 0; i < num.size(); i++){
            sum += num[i] - '0';
        }   
        return sum;
    }
    int getLucky(string s, int k) {
        string num = returndig(s);
        int ans = 0;
        while(k > 0){
            ans = transform(num);
            num = to_string(ans);
            k--;
        }
        return ans;
    }
};