class Solution {
public:
    int maxDepth(string s) {
        int maxd = INT_MIN;
        int d = 0;
        for(int i =0;i<s.size();i++){
            if(s[i] == '(') d++;
            if(s[i] == ')') d--;
            if(d>maxd) maxd = d;
        }
        return maxd;
    }
};