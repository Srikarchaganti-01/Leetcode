class Solution {
public:
    string checknice(string str,int a,int b){
        set<int>st1;
        set<int>st2;
        string res = "";
        for(int i=a;i<=b;i++){
            int num = str[i];
            res.push_back(str[i]);
            if((num >= 65) && (num <= 90)) st1.insert(num);
            else if((num >= 97) && (num <= 122)) st2.insert(num);
        }
        
        for(int it:st1){
            int n = it+32;
            if(!st2.count(n)) return "";
        }
        
        for(int it:st2){
            int n = it-32;
            if(!st1.count(n)) return "";
        }
        return res;
    }
    string longestNiceSubstring(string s) {
        int n = s.size();
        string str = "";
        string res = "";
        int len = 0;
        int maxi = INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                str = checknice(s,i,j);
                len = j-i+1;
                if(len>maxi && str != "" ){
                    maxi = len;
                    res = str;
                }
            }
        }
        return res;
    }
};