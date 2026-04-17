class Solution {
public:
    int minimumChairs(string s) {
        int ecount = 0;
        int ccount = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'E'){
                ecount++;
                ccount = max(ccount, ecount);
            }
            else if(s[i] == 'L'){
                ecount--;
            }
        }
        return ccount;
    }
};