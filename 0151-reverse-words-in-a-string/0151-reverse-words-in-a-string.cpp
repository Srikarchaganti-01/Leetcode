class Solution {
public:
    void addword(int left, int right, string &ans, string &s){
        if(!ans.empty()) ans.push_back(' ');
        for(int i = left; i <= right; i++){
            ans.push_back(s[i]);
        }
    }
    string reverseWords(string s) {
        int left = s.size() - 1;
        int right = left;
        string str;
        while(left >= 0){
            while(left >= 0 && s[left] == ' ') left--;
            if(left < 0) break;
            right = left;
            while(left >= 0 && s[left] != ' ') left--;
            addword(left + 1, right, str, s);
        }
        return str;
    }
};