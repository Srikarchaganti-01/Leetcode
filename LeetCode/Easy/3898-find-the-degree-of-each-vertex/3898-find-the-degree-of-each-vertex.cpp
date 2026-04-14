class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int edg = matrix.size();
        vector<int>v;
        for(int i=0;i<edg;i++){
            int deg = 0;
            for(int j=0;j<matrix[i].size();j++){
                deg = deg + matrix[i][j];
            }
            v.push_back(deg);
        }
        return v;
    }
};