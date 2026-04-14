class Solution {
public:
    string sortSentence(string s) {
        vector<string> v(10);
        string word;       
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == ' ') continue;        
            word.clear();           
            while(i < s.size() && isalpha(s[i])) {
                word.push_back(s[i]);
                i++;
            }            
            int pos = s[i] - '0';
            v[pos] = word;
        } 
        string res;
        for(int i = 1; i < 10; i++) {
            if(v[i] != "") {
                res += v[i] + " ";
            }
        }
        if(!res.empty()) res.pop_back();
        return res;
    }
};