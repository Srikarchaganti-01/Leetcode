class Solution {
public:
    int numberOfSubstrings(string s) {
        int apos = -1, bpos = -1, cpos = -1;
        int count = 0;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'a') apos = i;
            if(s[i] == 'b') bpos = i;
            if(s[i] == 'c') cpos = i;

            if(apos != -1 && bpos != -1 && cpos != -1){
                count += 1 + min(apos, min(bpos, cpos));
            }
        }

        return count;
    }
};