class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<int,int>mpl;
        unordered_map<int,int>mpu;
        for(int i=0;i<word.size();i++){
            int ch = word[i];
            if((ch>=97 && ch<=122) ){
                mpl[ch-32] = i;
            }
        }
        for(int i=0;i<word.size();i++){
            int ch = word[i];
            if((ch>=65 && ch<=90) && (!mpu.count(ch))){
                mpu[ch] = i;
            }
        }
        int count = 0;
        for(auto it:mpu){
            int ch = it.first;
            if(mpl.count(ch) && mpl[ch] < mpu[ch]) count++;
        }
        return count;
    }
};