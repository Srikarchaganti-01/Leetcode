class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        if (s1 == s2) return true;
        string temp = s2;
        swap(s2[0], s2[2]);
        if (s2 == s1) return true;
        s2 = temp;
        swap(s2[1], s2[3]);
        if (s2 == s1) return true;
        swap(s2[0], s2[2]);
        if (s2 == s1) return true;
        return false;
    }
};