class Solution {
public:

    int findlen(int n){
        int count =0;
        while(n>0){
            count++;
            n=n/10;
        }
        return count;
    }
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        set<int>st;
        for(int i=0;i<arr1.size();i++){
            int num =arr1[i];
            while(num>0){
                st.insert(num);
                num = num/10;
            }
        }
        int maxi = INT_MIN;
        for(int i=0;i<arr2.size();i++){
            int num = arr2[i];
            while(num>0){
                if(st.count(num)){
                    int len = findlen(num);
                    maxi = max(len,maxi);
                }
                num = num/10;
            }
        }
        if(maxi == INT_MIN) return 0;
        return maxi;
    }
};