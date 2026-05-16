class Solution {
public:
    int minFlips(string s) {
        int n=s.size();
        int counto=0;
        int counti=0;
        int case3 =0;
        int case4 =INT_MAX;
        if((s[0] == '1') && (s[n-1] == '1')){
            case4 = 0;
            for(int i=1;i<n-1;i++){
                if(s[i] == '1') case4++;
            }
        } 
        bool flag = true;
        for(int i=0;i<n;i++){
            if((s[i] == '1') && flag) flag = false;
            else if((s[i] == '1') && !flag) case3++;
        }
        for(int i=0;i<s.size();i++){
            if(s[i] == '0') counto++;
            if(s[i] == '1') counti++;
            
        }
        int a = min(counto,counti);
        int b = min(case3,case4);
        return min(a,b);
    }
};