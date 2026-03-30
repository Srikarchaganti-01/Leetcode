class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>v;
        vector<int>ans(2);
        int n = grid.size();
        int m = grid[0].size();
        for(int i = 0;i < n;i++){
            for(int j =0;j<m;j++){
                v.push_back(grid[i][j]);
            }
        }
        sort(v.begin(),v.end());
        if(v[0] != 1) ans[1] = 1;
        for(int i =1;i<v.size();i++){
            if(v[i] == v[i-1]) ans[0] = v[i];
            if(v[i] == v[i-1] + 2) ans[1] = v[i] - 1;
        }
        if(v.back() != n*m) ans[1] = n*m; 
        return ans;
    }
};