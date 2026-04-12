class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        vector<int>v;
        int pos = 1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                v.push_back(matrix[i][j]);
            }
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            if(i+1 == k) return v[i];
        }
        return -1;
    }
};