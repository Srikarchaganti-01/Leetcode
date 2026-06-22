class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int b =0;
        int a =0;
        int l =0;
        int o =0;
        int n =0;
        for(int i=0;i<text.size();i++){
            char ch = text[i];
            if(ch == 'b')b++;
            else if(ch == 'a')a++;
            else if(ch == 'l')l++;
            else if(ch == 'o')o++;
            else if(ch == 'n')n++;
            else continue;
        }
        l=l/2;
        o=o/2;
        int m1 = min(b,a);
        int m2 = min(n,l);
        int m3 = min(m1,m2);
        return min(o,m3);
    }
};