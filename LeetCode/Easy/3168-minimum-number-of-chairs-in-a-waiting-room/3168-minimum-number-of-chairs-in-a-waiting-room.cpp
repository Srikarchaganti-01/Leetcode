class Solution {
public:
    int minimumChairs(string s) {
        int ecount = -1;
        int ccount = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] == 'E'){
                if(ecount == -1) ecount = 0;
                ecount++;
            }
            if(ccount < ecount) ccount++;
            if(s[i] == 'L') ecount--;
        }
        cout<<ccount;
        return ccount;
    }
};