class Solution {
public:
    int numberOfSpecialChars(string word) {
        set<int>stl;
        set<int>stu;
        for(int i=0;i<word.size();i++){
            int ch = word[i];
            if(ch>=65 && ch<=90) stu.insert(ch);
            else if(ch>=97 && ch<=122) stl.insert(ch);
        }
        int count =0;
        
        for(auto i:stl){
            if(stu.count(i-32)) count++;
        }
        return count;
    }
};